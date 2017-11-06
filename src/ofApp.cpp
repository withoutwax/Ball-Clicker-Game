#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    b.position.x = 2;
    b.position.y = ofGetHeight();
    
    p.position.x = ofGetWidth()/2;
    p.position.y = ofGetHeight()/2;
    
    b.velocity.y = 7;
    
    b.acceleration.y = -1;
    
    sky.load("SKY01.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    b.update();
    
    /*
    if ((p.position.y - p.radius) > ofGetHeight()) {
        p.position.y = ofGetHeight() - p.radius;
        p.velocity.y = p.velocity.y * -.8;
    }
    */
}

//--------------------------------------------------------------
void ofApp::draw(){
    sky.draw(b.position.x, b.position.y-9000);
    b.draw();
    p.draw();
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    
    if (b.velocity.y > 0) {
        b.velocity.y = 15;
        b.velocity.y = b.velocity.y * 1.5;
    } else if (b.velocity.y < 0) {
        b.velocity.y = -15;
        b.velocity.y = b.velocity.y * -1.5;
    }
}

