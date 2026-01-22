/**
 * PSA crypto configuration extension
 *
 * This configuration file specifies options that differ from the default
 * configuration in psa/crypto_config.h
 */
/*
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later
 */

#undef MBEDTLS_FS_IO
#undef MBEDTLS_HAVE_TIME
#undef MBEDTLS_HAVE_TIME_DATE
#undef TF_PSA_CRYPTO_VERSION
#undef MBEDTLS_LMS_C
#undef MBEDTLS_NIST_KW_C
#undef MBEDTLS_PSA_BUILTIN_GET_ENTROPY
#undef MBEDTLS_PSA_CRYPTO_STORAGE_C
#define MBEDTLS_PSA_DRIVER_GET_ENTROPY
#undef MBEDTLS_PSA_ITS_FILE_C
#undef MBEDTLS_PSA_KEY_STORE_DYNAMIC
#undef MBEDTLS_AESNI_C
#undef MBEDTLS_AESCE_C
#define MBEDTLS_AES_ROM_TABLES
#undef MBEDTLS_HAVE_ASM
