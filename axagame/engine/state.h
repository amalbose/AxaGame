/*
 * state.h
 *
 *  Created on: Jan 12, 2013
 *      Author: amalbose
 */

#ifndef STATE_H_
#define STATE_H_

#include <irrlicht.h>

class State {

public:
		virtual int init() { return 1; }
		virtual int close() { return 1; }

		virtual ~State() { }

		virtual bool onKeyPress(int key) { return false; }
		virtual bool onKeyLift(int key) { return false; }
		virtual void onMouseMotion(float valueX, float valueY) { }
		virtual bool onMousePress(int button, int valueX, int valueY) { return false; }
		virtual void onMouseLift(int button, int valueX, int valueY) { }
//		virtual void onMouseWheel(float direction) { }

		virtual void update(float FrameTime) { }
		virtual void updateRender(float TimeStepRemainder) { }
		virtual void render() { }
};



#endif /* STATE_H_ */
