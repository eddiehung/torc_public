// Torc - Copyright 2011 University of Southern California.  All Rights Reserved.
// $HeadURL$
// $Id$

// This program is free software: you can redistribute it and/or modify it under the terms of the 
// GNU General Public License as published by the Free Software Foundation, either version 3 of the 
// License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
// without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See 
// the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along with this program.  If 
// not, see <http://www.gnu.org/licenses/>.

#ifndef TORC_GENERIC_MESSAGE_SEVERITY_HPP
#define TORC_GENERIC_MESSAGE_SEVERITY_HPP


namespace torc {

namespace generic {

/**
 * @enum MessageSeverity
 * This type defines the severity of the message, i.e., whether it's an error, warning or an info message or it is suppressed.
 */
enum MessageSeverity
{
  eMessageSeveritySuppressed,
  eMessageSeverityInfo,
  eMessageSeverityWarning,
  eMessageSeverityError
};

} // namespace torc::generic

} // namespace torc
#endif
