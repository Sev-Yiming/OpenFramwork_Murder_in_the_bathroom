//
//  FireworkParticle.cpp
//  mySketch
//
//  Created by 七间 on 08/11/2017.
//
//

#include "FireworkParticle.hpp"

void FireworkParticle::setup(int x, int y, ofColor _color){

    position.set(ofGetMouseX(),ofGetMouseY());
    color = _color;
    velocity.set(ofRandom(-2,2),ofRandom(-1.6,1.6));
    acceleration.set(0, ofRandom(0,0.13));
    
    alpha = 255;
    
}
void FireworkParticle::update(){
    velocity +=acceleration;
    position += velocity;
    
    alpha-=4;
}
void FireworkParticle::draw(){
    ofSetColor(0,0,0, alpha);

    ofSetColor(color.r, color.g, color.b,alpha );
    
//    for (int i=8; i< position.y; i-=0.1) {
//        ofDrawCircle(position, i);
//    }
//    ofDrawCircle(position, 2);
    ofDrawLine(position.x, position.y, position.x+10, position.y+10);

    
}
