#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Background.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
		void mousePressed(int x, int y, int button);
    
    Particle p;
    Background b;
    ofImage sky;
};
