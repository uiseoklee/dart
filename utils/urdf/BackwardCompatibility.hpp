/*
 * Copyright (c) 2011-2019, The DART development contributors
 * All rights reserved.
 *
 * The list of contributors can be found at:
 *   https://github.com/dartsim/dart/blob/master/LICENSE
 *
 * This file is provided under the following "BSD-style" License:
 *   Redistribution and use in source and binary forms, with or
 *   without modification, are permitted provided that the following
 *   conditions are met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *   CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *   INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *   MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *   DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 *   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 *   USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 *   AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *   ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *   POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef DART_UTILS_URDF_BACKWARDCOMPATIBILITY_HPP_
#define DART_UTILS_URDF_BACKWARDCOMPATIBILITY_HPP_

#include "dart/config.hpp"

/* urdfdom_headers Version number */
// We define the version numbers of urdfdom_headers here since it doesn't expose
// the version numbers itself in source level.
#define URDFDOM_HEADERS_MAJOR_VERSION 1
#define URDFDOM_HEADERS_MINOR_VERSION 0
#define URDFDOM_HEADERS_PATCH_VERSION 4

#define URDFDOM_HEADERS_VERSION_AT_LEAST(x,y,z) \
  (URDFDOM_HEADERS_MAJOR_VERSION > x || (URDFDOM_HEADERS_MAJOR_VERSION >= x && \
  (URDFDOM_HEADERS_MINOR_VERSION > y || (URDFDOM_HEADERS_MINOR_VERSION >= y && \
  URDFDOM_HEADERS_PATCH_VERSION >= z))))

#if URDFDOM_HEADERS_VERSION_AT_LEAST(1,0,0)
#include <memory>
#else
#include "boost/shared_ptr.hpp"
#include "boost/weak_ptr.hpp"
#endif

namespace dart {
namespace utils {

#if URDFDOM_HEADERS_VERSION_AT_LEAST(1,0,0)
template <typename T> using urdf_shared_ptr = std::shared_ptr<T>;
template <typename T> using urdf_weak_ptr = std::weak_ptr<T>;
#else
template <typename T> using urdf_shared_ptr = boost::shared_ptr<T>;
template <typename T> using urdf_weak_ptr = boost::weak_ptr<T>;
#endif

} // namespace utils
} // namespace dart

#endif // DART_UTILS_URDF_BACKWARDCOMPATIBILITY_HPP_
