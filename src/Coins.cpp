#include "Coins.h"



void Coins::update() {
  
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


void Coins::draw() {
    ofSetColor(ofColor::black);
    ofDrawCircle(position, radius);
}
