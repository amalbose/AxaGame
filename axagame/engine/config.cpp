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

#include "config.h"

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
