/*  =========================================================================
    czguide - generated layer of public API

    Copyright (c) the Authors

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef CZGUIDE_LIBRARY_H_INCLUDED
#define CZGUIDE_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  CZGUIDE version macros for compile-time API detection
#define CZGUIDE_VERSION_MAJOR 0
#define CZGUIDE_VERSION_MINOR 0
#define CZGUIDE_VERSION_PATCH 0

#define CZGUIDE_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define CZGUIDE_VERSION \
    CZGUIDE_MAKE_VERSION(CZGUIDE_VERSION_MAJOR, CZGUIDE_VERSION_MINOR, CZGUIDE_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined CZGUIDE_STATIC
#       define CZGUIDE_EXPORT
#   elif defined CZGUIDE_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define CZGUIDE_EXPORT __declspec(dllexport)
#       else
#           define CZGUIDE_EXPORT
#       endif
#   elif defined CZGUIDE_EXPORTS
#       define CZGUIDE_EXPORT __declspec(dllexport)
#   else
#       define CZGUIDE_EXPORT __declspec(dllimport)
#   endif
#   define CZGUIDE_PRIVATE
#elif defined (__CYGWIN__)
#   define CZGUIDE_EXPORT
#   define CZGUIDE_PRIVATE
#else
#   define CZGUIDE_EXPORT
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define CZGUIDE_PRIVATE __attribute__ ((visibility ("hidden")))
#   else
#       define CZGUIDE_PRIVATE
#   endif
#endif

//  Project has no stable classes, so we build the draft API
#undef  CZGUIDE_BUILD_DRAFT_API
#define CZGUIDE_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef CZGUIDE_BUILD_DRAFT_API
typedef struct _common_t common_t;
#define COMMON_T_DEFINED
#endif // CZGUIDE_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef CZGUIDE_BUILD_DRAFT_API
#include "common.h"
#endif // CZGUIDE_BUILD_DRAFT_API

#ifdef CZGUIDE_BUILD_DRAFT_API
//  Self test for private classes
CZGUIDE_EXPORT void
    czguide_private_selftest (bool verbose);
#endif // CZGUIDE_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
