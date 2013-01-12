/*
 * game.h
 *
 *  Created on: Jan 12, 2013
 *      Author: amalbose
 */

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

	bool done();
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
