/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.18) *
 *******************************************************************/
#ifndef __wrappedopenalTYPES_H_
#define __wrappedopenalTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void* (*pFp_t)(void*);
typedef void* (*pFpp_t)(void*, void*);
typedef void (*vFiiipp_t)(int32_t, int32_t, int32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(alRequestFoldbackStop, vFv_t) \
	GO(alGetProcAddress, pFp_t) \
	GO(alcGetProcAddress, pFpp_t) \
	GO(alRequestFoldbackStart, vFiiipp_t)

#endif // __wrappedopenalTYPES_H_
