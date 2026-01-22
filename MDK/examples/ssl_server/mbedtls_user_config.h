/**
 * Mbed TLS configuration extension
 *
 * This configuration file specifies options that differ from the default
 * configuration in mbedtls/mbedtls_config.h
 */
/*
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later
 */

#undef MBEDTLS_TIMING_C
#undef MBEDTLS_SSL_CLI_C
#undef MBEDTLS_SSL_CONTEXT_SERIALIZATION
#undef MBEDTLS_SSL_DTLS_CONNECTION_ID
#undef MBEDTLS_SSL_PROTO_TLS1_3
#undef MBEDTLS_SSL_KEYING_MATERIAL_EXPORT
#undef MBEDTLS_SSL_TLS1_3_COMPATIBILITY_MODE
#undef MBEDTLS_SSL_TLS1_3_KEY_EXCHANGE_MODE_EPHEMERAL_ENABLED
#undef MBEDTLS_SSL_TLS1_3_KEY_EXCHANGE_MODE_PSK_ENABLED
#undef MBEDTLS_SSL_TLS1_3_KEY_EXCHANGE_MODE_PSK_EPHEMERAL_ENABLED
#define MBEDTLS_SSL_IN_CONTENT_LEN            8192
#define MBEDTLS_SSL_OUT_CONTENT_LEN           8192