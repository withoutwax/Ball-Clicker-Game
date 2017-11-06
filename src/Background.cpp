#include "Background.h"



void Background::update() {
  
    // We don't update the acceleration
//    ax =
//    ay =
//    az =

    
    
    // Update the velocity based on the acceleration.
    velocity += acceleration;
    
    //    is SAME AS:
    
    //    vx = vx + ax;
    //    vy = vy + ay;
    //    vz = vz + az;
    
    
    // Update the position based on the velocity.
    position += velocity;
    
    // is SAME AS:
    //    x = x + vx;
    //    y = y + vy;
    //    z = z + vz;
    
    
}


void Background::draw() {
    int xPos, yPos;
    
    ofSetColor(ofColor::black);
    ofDrawRectangle(position.x + 100, position.y + 200, 10, 10);
    
    xPos = ofRandom(ofGetWidth());
    yPos = ofRandom(ofGetHeight());
    
    for (int i = 0; i < 30; i++) {
        ofDrawRectangle(position.x*i, position.y, 10, 10);
    }
    
}
