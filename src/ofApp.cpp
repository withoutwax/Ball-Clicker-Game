#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    p.position.x = ofGetWidth()/2;
    p.position.y = ofGetHeight()/2;
    
    p.velocity.y = 7;
    
    p.acceleration.y = 1;
}

//--------------------------------------------------------------
void ofApp::update(){
    p.update();
    
    if ((p.position.y - p.radius) > ofGetHeight()) {
        p.position.y = ofGetHeight() - p.radius;
        p.velocity.y = p.velocity.y * -.8;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    p.draw();
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    
    if (p.velocity.y > 0) {
        p.velocity.y = 15;
        p.velocity.y = p.velocity.y * -1.5;
    } else if (p.velocity.y < 0) {
        p.velocity.y = p.velocity.y * 1.5;
    }
}

