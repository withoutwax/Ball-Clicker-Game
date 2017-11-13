#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Background.h"
#include "Coins.h"

class ofApp : public ofBaseApp{

	public:
		void setup() override;
		void update() override;
		void draw() override;
    
    void bounce();
    
		void mousePressed(int x, int y, int button) override;
    void keyPressed(int key) override;
    void keyReleased(int key) override;
    
    Coins c;
    Particle p;
    Background b;
    ofImage sky;
    
    
};
