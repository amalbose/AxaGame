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

#include "game.h"

int GameClass::init(int argc, char **argv) {

	isWindowActive = true;
	isRunning = true;
	sleepRate = 120.0f;

	//Initialize Config
	if (Config::Instance().initConfig()) {
		std::cout<<"failed config";
		return 1;
	}

	//Setting up IrrlichDevice
	if(Controller::Instance().init(EDT_OPENGL,
			(core::dimension2d<u32>(1366, 768)), 32, true, false, false, 0)) {
		std::cout<<"failed instance creation";
		return 1;
	}
	return 0;
}

void GameClass::update() {
	float frameTime = (irrTimer->getTime() - timeStamp) * 0.001f;
	timeStamp = irrTimer->getTime();

	// Limit frame rate
	float extraTime = 1.0f / sleepRate - frameTime;
	if(extraTime > 0.0f) {
		irrDevice->sleep((u32)(extraTime * 1000));
	}
	currentState->update(frameTime);
}

void GameClass::close() {

}
