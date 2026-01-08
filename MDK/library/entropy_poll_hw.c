/*
 * Entropy hardware poll function
 *
 *  Copyright (C) 2006-2024, Arm Limited, All Rights Reserved
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "mbedtls/build_info.h"

#if defined(MBEDTLS_PSA_DRIVER_GET_ENTROPY)

#include "mbedtls/platform.h"

#include <string.h>
#include "cmsis_compiler.h"
#include "RTE_Components.h"
#if defined(RTE_CMSIS_RTOS2)
 #include "cmsis_os2.h"
#else
 #error "::CMSIS:RTOS selection invalid"
#endif

#define LCG_RAND(val)   ((val) * 1103515245 + 12345) 

/**
 * Get entropy callback for a hardware source
 */
__WEAK int mbedtls_platform_get_entropy(psa_driver_get_entropy_flags_t flags,
                                 size_t *estimate_bits,
                                 unsigned char *output, size_t output_size) {
  uint32_t rand,len = (uint32_t)output_size;
 
  if (flags != 0) {
    return PSA_ERROR_NOT_SUPPORTED;
  }

  /** Note: This is a weak entropy source.
   *  It implements a LCG pseudo-random number generator
   *  seeded with the kernel tick count.
   */
  rand = LCG_RAND(osKernelGetTickCount ());

  for ( ; len > 3; len -= 4) {
    memcpy (output, &rand, 4);
    rand = LCG_RAND(rand);
  }
  memcpy (output, &rand, len);

  *estimate_bits = 8 * output_size;

  return (0);
}

#endif /* MBEDTLS_PSA_DRIVER_GET_ENTROPY */
