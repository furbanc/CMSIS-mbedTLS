#!/bin/bash
# Generate documentation

# Configuration headers
MBEDTLS_CONFIG_H='include/mbedtls/mbedtls_config.h'
CRYPTO_CONFIG_H='tf-psa-crypto/include/psa/crypto_config.h'

# Backup configuration
MBEDTLS_CONFIG_BAK=${MBEDTLS_CONFIG_H}.bak
CRYPTO_CONFIG_BAK=${CRYPTO_CONFIG_H}.bak
cp -p $MBEDTLS_CONFIG_H $MBEDTLS_CONFIG_BAK
cp -p $CRYPTO_CONFIG_H $CRYPTO_CONFIG_BAK

# Full configuration (all defines)
python scripts/config.py realfull

# Generate documentation
cd doxygen
doxygen mbedtls.doxyfile
cd ..

cd tf-psa-crypto
CRYPTO_VERSION=$(grep -oP 'set\(TF_PSA_CRYPTO_VERSION\s+\K[0-9.]+(?=\))' CMakeLists.txt)

cd doxygen
sed "s|@TF-PSA-Crypto_VERSION@|$CRYPTO_VERSION|g" tfpsacrypto.doxyfile.in > tfpsacrypto.doxyfile
doxygen tfpsacrypto.doxyfile
rm tfpsacrypto.doxyfile 
cd ..

cd ..

# Restore configuration headers
mv $MBEDTLS_CONFIG_BAK $MBEDTLS_CONFIG_H
mv $CRYPTO_CONFIG_BAK $CRYPTO_CONFIG_H
