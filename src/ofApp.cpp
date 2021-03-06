#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    b.position.x = 0;
    b.position.y = ofGetHeight();
    b.velocity.y = 7;
    b.acceleration.y = -1;
    
//    c.position.x = 400;
//    c.position.y = 300;
//    c.velocity.y = 7;
//    c.acceleration.y = -1;
    
    p.position.x = ofGetWidth()/2;
    p.position.y = ofGetHeight()/2;
    
    sky.load("SKY01.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    b.update();
    p.update();
//    c.update();
    
//    int testX = b.position.x+(ofGetWidth()/2);
//    int testY = b.position.y;
    
    
    // Ball hit - coin X Position
    //Particle.position.x > coin.position.x(-50 radius) &&
    //Particle.position.x < coin.position.x(+50 radius) &&
    
    // Ball hit - coin Y Position
    //Particle.position.y > coin.position.y(-50 radius) &&
    //Particle.position.y < coin.position.y(+50 radius)
    
    
    // 01 Need to create an ArrayList (ofVec2f) to store the coins.
    // 02 Need to make coins disappear when hit/eaten/collected.
    // 03 Need to generate random coins as the user moves up.
    
    if (p.position.x > b.position.x+(ofGetWidth()/2)-50 && p.position.x < b.position.x+(ofGetWidth()/2)+50 && p.position.y > b.position.y-50 &&  p.position.y < b.position.y+50) {
        bounce();
    } else if (p.position.x > b.position.x+(ofGetWidth()/2)+150-50 && p.position.x < b.position.x+(ofGetWidth()/2)+150+50 && p.position.y > b.position.y-250-50 &&  p.position.y < b.position.y-250+50) {
        bounce();
    } else if (p.position.x > b.position.x+(ofGetWidth()/2)-150-50 && p.position.x < b.position.x+(ofGetWidth()/2)-150+50 && p.position.y > b.position.y-500-50 &&  p.position.y < b.position.y-500+50) {
        bounce();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    sky.draw(b.position.x, b.position.y-9000);
    //b.draw();
    p.draw();
//    c.draw();
    
    ofDrawCircle(b.position.x+(ofGetWidth()/2), b.position.y, 50);
    ofDrawCircle(b.position.x+(ofGetWidth()/2)+150, b.position.y-250, 50);
    ofDrawCircle(b.position.x+(ofGetWidth()/2)-150, b.position.y-500, 50);
    
}


void ofApp::bounce() {
    b.velocity.y = 15;
    b.velocity.y = b.velocity.y * 1.5;
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

void ofApp::keyPressed(int key){
    
    if (key == OF_KEY_LEFT) {
        p.velocity.x = -10;
        //p.acceleration.x = .1;
    } else if (key == OF_KEY_RIGHT) {
        p.velocity.x = 10;
        //p.acceleration.x = -.1;
    }
}

void ofApp::keyReleased(int key) {
    p.velocity.x = 0;
}
