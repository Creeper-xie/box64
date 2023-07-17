/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.18) *
 *******************************************************************/
#ifndef __wrappedcrypto3TYPES_H_
#define __wrappedcrypto3TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef void* (*pFpp_t)(void*, void*);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef void (*vFiipV_t)(int32_t, int32_t, void*, ...);
typedef void (*vFiipA_t)(int32_t, int32_t, void*, va_list);
typedef void* (*pFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFpiipp_t)(void*, int32_t, int32_t, void*, void*);
typedef int32_t (*iFpplppi_t)(void*, void*, intptr_t, void*, void*, int32_t);
typedef int32_t (*iFppppipp_t)(void*, void*, void*, void*, int32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(CRYPTO_set_id_callback, vFp_t) \
	GO(CRYPTO_set_locking_callback, vFp_t) \
	GO(X509_STORE_CTX_set_verify_cb, vFpp_t) \
	GO(OPENSSL_sk_pop_free, pFpp_t) \
	GO(ASN1_i2d_bio, iFppp_t) \
	GO(ERR_set_error, vFiipV_t) \
	GO(ERR_vset_error, vFiipA_t) \
	GO(ASN1_d2i_bio, pFpppp_t) \
	GO(PEM_read_bio_DSAPrivateKey, pFpppp_t) \
	GO(PEM_read_bio_DSA_PUBKEY, pFpppp_t) \
	GO(PEM_read_bio_ECPrivateKey, pFpppp_t) \
	GO(PEM_read_bio_EC_PUBKEY, pFpppp_t) \
	GO(PEM_read_bio_PKCS7, pFpppp_t) \
	GO(PEM_read_bio_RSAPrivateKey, pFpppp_t) \
	GO(PEM_read_bio_RSA_PUBKEY, pFpppp_t) \
	GO(PEM_read_bio_X509, pFpppp_t) \
	GO(PEM_read_bio_X509_AUX, pFpppp_t) \
	GO(PEM_read_bio_X509_CERT_PAIR, pFpppp_t) \
	GO(PEM_read_bio_X509_CRL, pFpppp_t) \
	GO(PEM_read_bio_X509_REQ, pFpppp_t) \
	GO(ENGINE_ctrl, iFpiipp_t) \
	GO(ENGINE_ctrl_cmd, iFpplppi_t) \
	GO(PEM_write_bio_DSAPrivateKey, iFppppipp_t) \
	GO(PEM_write_bio_ECPrivateKey, iFppppipp_t) \
	GO(PEM_write_bio_RSAPrivateKey, iFppppipp_t)

#endif // __wrappedcrypto3TYPES_H_
