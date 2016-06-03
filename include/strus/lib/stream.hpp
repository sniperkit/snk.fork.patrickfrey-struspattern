/*
 * Copyright (c) 2014 Patrick P. Frey
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
/// \brief Exported functions of the strus stream library implementing pattern matching of rules built from document terms
/// \file error.hpp
#ifndef _STRUS_STREAM_LIB_HPP_INCLUDED
#define _STRUS_STREAM_LIB_HPP_INCLUDED
#include <cstdio>

/// \brief strus toplevel namespace
namespace strus {

/// \brief Forward declaration
class StreamTermMatchInterface;
/// \brief Forward declaration
class StreamPatternMatchInterface;
/// \brief Forward declaration
class ErrorBufferInterface;

StreamTermMatchInterface* createStreamTermMatch_standard( ErrorBufferInterface* errorhnd);
StreamPatternMatchInterface* createStreamPatternMatch_standard( ErrorBufferInterface* errorhnd);

}//namespace
#endif

