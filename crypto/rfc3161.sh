#!/usr/bin/env sh

OPENSSL_BIN=/usr/local/Cellar/openssl/1.0.2d_1/bin/openssl
REQ=tsa_request.tsq
RES=tsa_response.tsr
DIGEST=cc55523fb59983b0f707b572ae588cde77516c5c
# #sha256 is not currently supported
# DIGEST=bf313631c6448b0e9025ffece236d100628d64eb3442555f326b5699a48c4be9

$OPENSSL_BIN ts -query -digest $DIGEST\
 -sha1 -cert -no_nonce -out $REQ
wc -c <$REQ

curl -H 'Content-Type: application/timestamp-query' \
 --data-binary @$REQ https://tsa.safecreative.org/ -o $RES
wc -c <$RES

# $OPENSSL_BIN ts -verify -digest $DIGEST -queryfile $REQ -in $RES \
# -CApath ca_path -CAfile ca_file.pem -untrusted cert_file.pem
