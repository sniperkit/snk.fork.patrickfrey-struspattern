/*
 * Copyright (c) 2014 Patrick P. Frey
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _STRUS_STREAM_PATTERN_MATCH_CONTEXT_INTERFACE_HPP_INCLUDED
#define _STRUS_STREAM_PATTERN_MATCH_CONTEXT_INTERFACE_HPP_INCLUDED
#include "strus/stream/patternMatchResult.hpp"
#include "strus/stream/patternMatchStatistics.hpp"
#include <vector>

namespace strus
{

/// \brief Interface for detecting patterns in one document
class StreamPatternMatchContextInterface
{
public:
	/// \brief Destructor
	virtual ~StreamPatternMatchContextInterface(){}

	/// \brief Feed the next input term
	/// \brief termid term identifier
	/// \brief ordpos 'ordinal position' term counting position for term proximity measures.
	/// \brief origpos original position in the source. Not interpreted by the pattern matching (except for joining spans) but can be used by the caller to identify the source term.
	/// \brief origsize original size in the source. Not interpreted by the pattern matching (except for joining spans) but can be used by the caller to identify the source term span.
	/// \remark The input terms must be fed in ascending order of 'ordpos'
	virtual void putInput(
			unsigned int termid,
			unsigned int ordpos,
			unsigned int origpos,
			unsigned int origsize)=0;

	/// \brief Get the list of matches detected in the current document
	/// \return the list of matches
	virtual std::vector<stream::PatternMatchResult> fetchResults() const=0;

	/// \brief Get the statistics for global pattern matching analysis
	/// \return the statistics data gathered during processing
	virtual stream::PatternMatchStatistics getStatistics() const=0;
};

} //namespace
#endif

