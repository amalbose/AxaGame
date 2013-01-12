/*
 * game.cpp
 *
 *  Created on: Jan 12, 2013
 *      Author: amalbose
 */

#include "game.h"
#include "config.h"

int GameClass::init(int argc, char *argv) {

	isWindowActive = true;
	isRunning = true;

	//Initialize Config
	if(!Config::Instance().initConfig()) {
		return 1;
	}

	//Setting up IrrlichDevice

	return 1;
}
