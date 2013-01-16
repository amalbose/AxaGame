/*************************************************************************************
 *   Created on: Jan 16, 2013
 *
 *	AxaGame - http://axatrikx.com
 *	Copyright (C) 2013  Amal Bose
 *
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************************************************/

#include "log.h"

Log::Log() {
}

std::ostringstream& Log::get(LOG level) {
	os << "[" << toString(level) << "] : ";
	os << Utils::getCurrentTime() << " > ";
	os << std::string(level > DEBUG ? level - DEBUG : 0, '\t');
	return os;
}

Log::~Log() {
	os << std::endl;
	fprintf(stderr, "%s", os.str().c_str());
    fflush(stderr);
}

LOG& Log::reportingLevel() {
	static LOG reportingLevel = DEBUG;
	return reportingLevel;
}

std::string Log::toString(LOG level) {
	static const char* const levels[] = { "ERROR", "WARN", "INFO", "DEBUG" };
	return levels[level];
}

LOG Log::fromString(const std::string& level) {
	if (level == "DEBUG")
		return DEBUG;
	if (level == "INFO")
		return INFO;
	if (level == "WARN")
		return WARN;
	if (level == "ERROR")
		return ERROR;
	Log().get(WARN) << "Unknown logging level '" << level << "'. Using INFO level as default.";
	return INFO;
}
