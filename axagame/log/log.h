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

#ifndef LOG_H_
#define LOG_H_

#include <iostream>
//#include <utils/utils.h>

enum LOG {
	ERROR, WARN, INFO, DEBUG
};

class Log {

public:
	Log();
	virtual ~Log();
	std::ostringstream& get(LOG level = INFO);
	static LOG& ReportingLevel();

protected:
	//std::ostringstream os;
private:

	Log(const Log&);
	Log& operator =(const Log&);
	LOG messageLevel;
};

#endif /* LOG_H_ */
