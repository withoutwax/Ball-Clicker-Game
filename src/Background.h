#pragma once

#include "ofMain.h"


class Background {
    
public:
    // Update the position, velocity and acceleration
    void setup();
    void update();
    
    // Will render the particle on the screen
    void draw();
    
    // Represent the "Position" feature
    ofVec3f position;
    // For nightly version - glm::vec3 position;
    
    // Represent the "Velocity" feature
    ofVec3f velocity;
    //glm::vec3 velocity;
    
    // Represent the "Acceleration" feature
    ofVec3f acceleration;
    // glm::vec3 acceleration;
    
    // The age of our particle in number of frames.
    uint64_t age;
    
    float radius = 30;
    ofImage sky;
};

