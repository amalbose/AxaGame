/*
 * config.cpp
 *
 *  Created on: Jan 12, 2013
 *      Author: amalbose
 */

#include "config.h"

#include "defaults.h"

int ConfigClass::initConfig() {
	return resetConfig();
}

int ConfigClass::resetConfig() {

	//Giving default values
	driverType = DRIVER_TYPE;
	screenWidth = SCREEN_WIDTH;
	screenHeight = SCREEN_HEIGHT;
	fullscreen = FULLSCREEN;
	shadows = SHADOWS;
	shaders = SHADERS;
	antiAliasing = ANTIALIASING;
	anisotropicFiltering = ANISOTROPIC_FILTERING;
	trilinearFiltering = TRILINEAR_FILTERING;

	return 0;
}
