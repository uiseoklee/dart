/* config.hpp. Generated by CMake for dart. */
#ifndef DART_CONFIG_HPP_
#define DART_CONFIG_HPP_

#include <Eigen/Core>

/* Version number */
#define DART_MAJOR_VERSION 6
#define DART_MINOR_VERSION 9
#define DART_PATCH_VERSION 2

#define DART_VERSION "6.9.2"
#define DART_DESCRIPTION "Dynamic Animation and Robotics Toolkit."

#define DART_VERSION_AT_LEAST(x,y,z) \
  (DART_MAJOR_VERSION > x || (DART_MAJOR_VERSION >= x && \
  (DART_MINOR_VERSION > y || (DART_MINOR_VERSION >= y && \
  DART_PATCH_VERSION >= z))))

#define DART_MAJOR_MINOR_VERSION_AT_LEAST(x,y) \
  (DART_MAJOR_VERSION > x || (DART_MAJOR_VERSION >= x && \
  (DART_MINOR_VERSION > y || (DART_MINOR_VERSION >= y))))

#define DART_VERSION_AT_MOST(x,y,z) \
  (DART_MAJOR_VERSION < x || (DART_MAJOR_VERSION <= x && \
  (DART_MINOR_VERSION < y || (DART_MINOR_VERSION <= y && \
  DART_PATCH_VERSION <= z))))

#define DART_MAJOR_MINOR_VERSION_AT_MOST(x,y) \
  (DART_MAJOR_VERSION < x || (DART_MAJOR_VERSION <= x && \
  (DART_MINOR_VERSION < y || (DART_MINOR_VERSION <= y))))

#define EIGEN_VERSION_AT_MOST(x,y,z) \
  (EIGEN_WORLD_VERSION < x || (EIGEN_WORLD_VERSION <= x && \
  (EIGEN_MAJOR_VERSION < y || (EIGEN_MAJOR_VERSION <= y && \
  EIGEN_MINOR_VERSION <= z))))

// Detect the compiler
#if defined(__clang__)
  #define DART_COMPILER_CLANG
#elif defined(__GNUC__) || defined(__GNUG__)
  #define DART_COMPILER_GCC
#elif defined(_MSC_VER)
  #define DART_COMPILER_MSVC
#endif

#define BUILD_TYPE_DEBUG 0
#define BUILD_TYPE_RELEASE 0
#define BUILD_TYPE_RELWITHDEBINFO 1
#define BUILD_TYPE_MINSIZEREL 0

#define HAVE_NLOPT 1
#define HAVE_IPOPT 1
#define HAVE_PAGMO 0
#define HAVE_SNOPT 0
#define HAVE_BULLET 1
#define HAVE_ODE 1
#define HAVE_FLANN 1
#define HAVE_OCTOMAP 1

#define DART_ENABLE_SIMD 0

// Deprecated in DART 6.2 and will be removed in DART 7.
#define DART_ROOT_PATH "/build/dart-ob_fg0/dart-6.9.2/"
#define DART_DATA_PATH "/build/dart-ob_fg0/dart-6.9.2/data/"

#define DART_DATA_LOCAL_PATH "/build/dart-ob_fg0/dart-6.9.2/data/"
#define DART_DATA_GLOBAL_PATH "/usr/share/doc/dart/data/"

// See #451
#define ASSIMP_AISCENE_CTOR_DTOR_DEFINED 1
#define ASSIMP_AIMATERIAL_CTOR_DTOR_DEFINED 1

// Workaround for the fact that Bullet does not add the definition to
/* #undef header */
/* #undef BT_USE_DOUBLE_PRECISION */

#endif // #ifndef DART_CONFIG_HPP_
