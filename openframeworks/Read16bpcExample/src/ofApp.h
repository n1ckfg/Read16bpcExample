#pragma once

#include "ofMain.h"
#include "Read16bpc.h"

class ofApp : public ofBaseApp {

	public:
		void setup();
		void update();
		void draw();
			
		Read16bpc img;

};
