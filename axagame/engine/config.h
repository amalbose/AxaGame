/*
 * config.h
 *
 *  Created on: Jan 12, 2013
 *      Author: amalbose
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include "singleton.h"

class ConfigClass {
public:

	//irrlicht driver arguments
	int driverType, screenWidth, screenHeight, anisotropicFiltering, antiAliasing;
	bool fullscreen, shadows, trilinearFiltering, shaders;

	int initConfig();
	void closeConfig();
	int resetConfig();

	int readConfig();
	int writeConfig();
};

typedef Singleton<ConfigClass> Config;


#endif /* CONFIG_H_ */
