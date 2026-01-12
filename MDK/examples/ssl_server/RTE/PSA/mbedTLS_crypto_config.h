/**
 * PSA crypto configuration template
 */
/*
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later
 */

#define TF_PSA_CRYPTO_CONFIG_VERSION 0x01000000

/* Cryptographic mechanism selection (PSA API) */ 
#define PSA_WANT_ALG_CBC_NO_PADDING             1
#define PSA_WANT_ALG_CBC_PKCS7                  1
#define PSA_WANT_ALG_CCM                        1
#define PSA_WANT_ALG_CCM_STAR_NO_TAG            1
#define PSA_WANT_ALG_CMAC                       1
#define PSA_WANT_ALG_CFB                        1
#define PSA_WANT_ALG_CHACHA20_POLY1305          1
#define PSA_WANT_ALG_CTR                        1
#define PSA_WANT_ALG_DETERMINISTIC_ECDSA        1
#define PSA_WANT_ALG_ECB_NO_PADDING             1
#define PSA_WANT_ALG_ECDH                       1
#define PSA_WANT_ALG_FFDH                       1
#define PSA_WANT_ALG_ECDSA                      1
#define PSA_WANT_ALG_JPAKE                      1
#define PSA_WANT_ALG_GCM                        1
#define PSA_WANT_ALG_HKDF                       1
#define PSA_WANT_ALG_HKDF_EXTRACT               1
#define PSA_WANT_ALG_HKDF_EXPAND                1
#define PSA_WANT_ALG_HMAC                       1
#define PSA_WANT_ALG_MD5                        1
#define PSA_WANT_ALG_OFB                        1
#define PSA_WANT_ALG_PBKDF2_HMAC                1
#define PSA_WANT_ALG_PBKDF2_AES_CMAC_PRF_128    1
#define PSA_WANT_ALG_RIPEMD160                  1
#define PSA_WANT_ALG_RSA_OAEP                   1
#define PSA_WANT_ALG_RSA_PKCS1V15_CRYPT         1
#define PSA_WANT_ALG_RSA_PKCS1V15_SIGN          1
#define PSA_WANT_ALG_RSA_PSS                    1
#define PSA_WANT_ALG_SHA_1                      1
#define PSA_WANT_ALG_SHA_224                    1
#define PSA_WANT_ALG_SHA_256                    1
#define PSA_WANT_ALG_SHA_384                    1
#define PSA_WANT_ALG_SHA_512                    1
#define PSA_WANT_ALG_SHA3_224                   1
#define PSA_WANT_ALG_SHA3_256                   1
#define PSA_WANT_ALG_SHA3_384                   1
#define PSA_WANT_ALG_SHA3_512                   1
#define PSA_WANT_ALG_STREAM_CIPHER              1
#define PSA_WANT_ALG_TLS12_PRF                  1
#define PSA_WANT_ALG_TLS12_PSK_TO_MS            1
#define PSA_WANT_ALG_TLS12_ECJPAKE_TO_PMS       1

#define PSA_WANT_ECC_BRAINPOOL_P_R1_256         1
#define PSA_WANT_ECC_BRAINPOOL_P_R1_384         1
#define PSA_WANT_ECC_BRAINPOOL_P_R1_512         1
#define PSA_WANT_ECC_MONTGOMERY_255             1
#define PSA_WANT_ECC_MONTGOMERY_448             1
#define PSA_WANT_ECC_SECP_K1_256                1
/* For secp256r1, consider enabling #MBEDTLS_PSA_P256M_DRIVER_ENABLED
 * (see the description in psa/crypto_config.h for details). */
#define PSA_WANT_ECC_SECP_R1_256                1
#define PSA_WANT_ECC_SECP_R1_384                1
#define PSA_WANT_ECC_SECP_R1_521                1

#define PSA_WANT_DH_RFC7919_2048                1
#define PSA_WANT_DH_RFC7919_3072                1
#define PSA_WANT_DH_RFC7919_4096                1
#define PSA_WANT_DH_RFC7919_6144                1
#define PSA_WANT_DH_RFC7919_8192                1

#define PSA_WANT_KEY_TYPE_DERIVE                1
#define PSA_WANT_KEY_TYPE_PASSWORD              1
#define PSA_WANT_KEY_TYPE_PASSWORD_HASH         1
#define PSA_WANT_KEY_TYPE_HMAC                  1
#define PSA_WANT_KEY_TYPE_AES                   1
#define PSA_WANT_KEY_TYPE_ARIA                  1
#define PSA_WANT_KEY_TYPE_CAMELLIA              1
#define PSA_WANT_KEY_TYPE_CHACHA20              1
#define PSA_WANT_KEY_TYPE_ECC_PUBLIC_KEY        1
#define PSA_WANT_KEY_TYPE_DH_PUBLIC_KEY         1
#define PSA_WANT_KEY_TYPE_RAW_DATA              1
#define PSA_WANT_KEY_TYPE_RSA_PUBLIC_KEY        1

/*
 * The following symbols extend and deprecate the legacy
 * PSA_WANT_KEY_TYPE_xxx_KEY_PAIR ones. They include the usage of that key in
 * the name's suffix. "_USE" is the most generic and it can be used to describe
 * a generic suport, whereas other ones add more features on top of that and
 * they are more specific.
 */
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_BASIC    1
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_IMPORT   1
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_EXPORT   1
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_GENERATE 1
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR_DERIVE   1

#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_BASIC    1
#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_IMPORT   1
#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_EXPORT   1
#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_GENERATE 1
//#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR_DERIVE   1 /* Not supported */

#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_BASIC     1
#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_IMPORT    1
#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_EXPORT    1
#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_GENERATE  1
//#define PSA_WANT_KEY_TYPE_DH_KEY_PAIR_DERIVE    1 /* Not supported */

/* Platform abstraction layer */
//#define MBEDTLS_MEMORY_BUFFER_ALLOC_C
//#define MBEDTLS_FS_IO
//#define MBEDTLS_HAVE_TIME
//#define MBEDTLS_HAVE_TIME_DATE
//#define MBEDTLS_MEMORY_DEBUG
//#define MBEDTLS_MEMORY_BACKTRACE
#define MBEDTLS_PLATFORM_C
//#define MBEDTLS_PLATFORM_SETBUF_ALT
//#define MBEDTLS_PLATFORM_EXIT_ALT
//#define MBEDTLS_PLATFORM_TIME_ALT
//#define MBEDTLS_PLATFORM_FPRINTF_ALT
//#define MBEDTLS_PLATFORM_PRINTF_ALT
//#define MBEDTLS_PLATFORM_SNPRINTF_ALT
//#define MBEDTLS_PLATFORM_VSNPRINTF_ALT
//#define MBEDTLS_PLATFORM_NV_SEED_ALT
//#define MBEDTLS_PLATFORM_SETUP_TEARDOWN_ALT
//#define MBEDTLS_PLATFORM_MS_TIME_ALT
//#define MBEDTLS_PLATFORM_GMTIME_R_ALT
//#define MBEDTLS_PLATFORM_MEMORY
//#define MBEDTLS_PLATFORM_NO_STD_FUNCTIONS
//#define MBEDTLS_PLATFORM_ZEROIZE_ALT
//#define MBEDTLS_THREADING_ALT
//#define MBEDTLS_THREADING_PTHREAD
//#define MBEDTLS_THREADING_C
//#define MBEDTLS_MEMORY_ALIGN_MULTIPLE         4
//#define MBEDTLS_PLATFORM_CALLOC_MACRO         calloc
//#define MBEDTLS_PLATFORM_EXIT_MACRO           exit
//#define MBEDTLS_PLATFORM_FREE_MACRO           free
//#define MBEDTLS_PLATFORM_FPRINTF_MACRO        fprintf
//#define MBEDTLS_PLATFORM_MS_TIME_TYPE_MACRO   int64_t
//#define MBEDTLS_PLATFORM_NV_SEED_READ_MACRO   mbedtls_platform_std_nv_seed_read
//#define MBEDTLS_PLATFORM_NV_SEED_WRITE_MACRO  mbedtls_platform_std_nv_seed_write
//#define MBEDTLS_PLATFORM_PRINTF_MACRO         printf
//#define MBEDTLS_PLATFORM_SETBUF_MACRO         setbuf
//#define MBEDTLS_PLATFORM_SNPRINTF_MACRO       snprintf
//#define MBEDTLS_PLATFORM_STD_CALLOC           calloc
//#define MBEDTLS_PLATFORM_STD_EXIT             exit
//#define MBEDTLS_PLATFORM_STD_EXIT_FAILURE     1
//#define MBEDTLS_PLATFORM_STD_EXIT_SUCCESS     0
//#define MBEDTLS_PLATFORM_STD_FPRINTF          fprintf
//#define MBEDTLS_PLATFORM_STD_FREE             free
//#define MBEDTLS_PLATFORM_STD_MEM_HDR          <stdlib.h>
//#define MBEDTLS_PLATFORM_STD_NV_SEED_FILE     "seedfile"
//#define MBEDTLS_PLATFORM_STD_NV_SEED_READ     mbedtls_platform_std_nv_seed_read
//#define MBEDTLS_PLATFORM_STD_NV_SEED_WRITE    mbedtls_platform_std_nv_seed_write
//#define MBEDTLS_PLATFORM_STD_PRINTF           printf
//#define MBEDTLS_PLATFORM_STD_SETBUF           setbuf
//#define MBEDTLS_PLATFORM_STD_SNPRINTF         snprintf
//#define MBEDTLS_PLATFORM_STD_TIME             time
//#define MBEDTLS_PLATFORM_TIME_MACRO           time
//#define MBEDTLS_PLATFORM_TIME_TYPE_MACRO      time_t
//#define MBEDTLS_PLATFORM_VSNPRINTF_MACRO      vsnprintf
//#define MBEDTLS_PRINTF_MS_TIME                PRId64

/* General and test configuration options */
//#define MBEDTLS_CHECK_RETURN_WARNING
//#define MBEDTLS_DEPRECATED_WARNING
//#define MBEDTLS_DEPRECATED_REMOVED
//#define MBEDTLS_CHECK_RETURN                  __attribute__((__warn_unused_result__))
//#define MBEDTLS_IGNORE_RETURN( result )       ((void) !(result))
#define MBEDTLS_SELF_TEST
//#define MBEDTLS_TEST_CONSTANT_FLOW_MEMSAN
//#define MBEDTLS_TEST_CONSTANT_FLOW_VALGRIND
//#define MBEDTLS_TEST_HOOKS
//#define TF_PSA_CRYPTO_VERSION

/* Cryptographic mechanism selection (extended API) */
//#define MBEDTLS_LMS_C
//#define MBEDTLS_LMS_PRIVATE
#define MBEDTLS_MD_C
//#define MBEDTLS_NIST_KW_C
#define MBEDTLS_PK_C
#define MBEDTLS_PKCS5_C
#define MBEDTLS_PK_PARSE_C
#define MBEDTLS_PK_PARSE_EC_EXTENDED
//#define MBEDTLS_PK_PARSE_EC_COMPRESSED
#define MBEDTLS_PK_WRITE_C

/* Data format support */
#define MBEDTLS_ASN1_PARSE_C
#define MBEDTLS_ASN1_WRITE_C
#define MBEDTLS_BASE64_C
#define MBEDTLS_PEM_PARSE_C
#define MBEDTLS_PEM_WRITE_C

/* PSA core */
#define MBEDTLS_CTR_DRBG_C
//#define MBEDTLS_ENTROPY_NO_SOURCES_OK
//#define MBEDTLS_ENTROPY_NV_SEED
#define MBEDTLS_HMAC_DRBG_C
#define MBEDTLS_PSA_CRYPTO_C
//#define MBEDTLS_PSA_ASSUME_EXCLUSIVE_BUFFERS
//#define MBEDTLS_PSA_BUILTIN_GET_ENTROPY
//#define MBEDTLS_PSA_CRYPTO_BUILTIN_KEYS
//#define MBEDTLS_PSA_CRYPTO_CLIENT
//#define MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG
//#define MBEDTLS_PSA_CRYPTO_KEY_ID_ENCODES_OWNER
//#define MBEDTLS_PSA_CRYPTO_SPM
//#define MBEDTLS_PSA_CRYPTO_STORAGE_C
#define MBEDTLS_PSA_DRIVER_GET_ENTROPY
//#define MBEDTLS_PSA_ITS_FILE_C
//#define MBEDTLS_PSA_KEY_STORE_DYNAMIC
//#define MBEDTLS_PSA_STATIC_KEY_SLOTS
//#define MBEDTLS_PSA_CRYPTO_PLATFORM_FILE      "psa/crypto_platform_alt.h"
//#define MBEDTLS_PSA_CRYPTO_STRUCT_FILE        "psa/crypto_struct_alt.h"
//#define MBEDTLS_PSA_KEY_SLOT_COUNT            32
//#define MBEDTLS_PSA_STATIC_KEY_SLOT_BUFFER_SIZE   256
//#define MBEDTLS_PSA_CRYPTO_RNG_STRENGTH           256
//#define MBEDTLS_PSA_CRYPTO_RNG_HASH           PSA_ALG_SHA_256

/* Builtin drivers */
//#define MBEDTLS_AESNI_C
//#define MBEDTLS_AESCE_C
#define MBEDTLS_AES_ROM_TABLES
//#define MBEDTLS_AES_FEWER_TABLES
//#define MBEDTLS_AES_ONLY_128_BIT_KEY_LENGTH
//#define MBEDTLS_AES_USE_HARDWARE_ONLY
//#define MBEDTLS_BLOCK_CIPHER_NO_DECRYPT
//#define MBEDTLS_CAMELLIA_SMALL_MEMORY
//#define MBEDTLS_ECDH_VARIANT_EVEREST_ENABLED
#define MBEDTLS_ECP_NIST_OPTIM
//#define MBEDTLS_ECP_RESTARTABLE
//#define MBEDTLS_ECP_WITH_MPI_UINT
//#define MBEDTLS_GCM_LARGE_TABLE
//#define MBEDTLS_HAVE_ASM
//#define MBEDTLS_HAVE_SSE2
//#define MBEDTLS_NO_UDBL_DIVISION
//#define MBEDTLS_NO_64BIT_MULTIPLICATION
//#define MBEDTLS_PSA_P256M_DRIVER_ENABLED
//#define MBEDTLS_RSA_NO_CRT
//#define MBEDTLS_SHA256_SMALLER
//#define MBEDTLS_SHA256_USE_ARMV8_A_CRYPTO_IF_PRESENT
//#define MBEDTLS_SHA256_USE_ARMV8_A_CRYPTO_ONLY
//#define MBEDTLS_SHA512_SMALLER
//#define MBEDTLS_SHA512_USE_A64_CRYPTO_IF_PRESENT
//#define MBEDTLS_SHA512_USE_A64_CRYPTO_ONLY
//#define MBEDTLS_ECP_FIXED_POINT_OPTIM         1
//#define MBEDTLS_ECP_WINDOW_SIZE               4
//#define MBEDTLS_MPI_MAX_SIZE                  1024
//#define MBEDTLS_MPI_WINDOW_SIZE               2
//#define MBEDTLS_RSA_GEN_KEY_MIN_BITS          1024
