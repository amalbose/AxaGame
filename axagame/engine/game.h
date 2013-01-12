/*************************************************************************************
 *   Created on: Jan 12, 2013
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

#ifndef GAME_H_
#define GAME_H_

#include "imports.h"
#include "singleton.h"
#include "state.h"

class GameClass {
public:

	int init(int argc, char* argv);
	void update();
	void close();

	bool isDone() { return isRunning;}
	void setDone(bool value) { isRunning = value; }

	//states
	void changeState(State* state);
	State *getState() {		return currentState;	}


private:

	bool isRunning, isWindowActive;
	State *currentState;
};

typedef Singleton<GameClass> Game;

#endif /* GAME_H_ */
