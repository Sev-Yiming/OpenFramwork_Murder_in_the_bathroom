#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    wall.load("wall.jpg");

    ofSetBackgroundAuto(false);
    
    int numParticle = 40;
    for(int i = 0; i<numParticle;i++){
        FireworkParticle firework;
        fireworks.push_back(firework);
    }
    FireworkRestart();
}

//--------------------------------------------------------------
void ofApp::FireworkRestart(){
    ofPoint position;
    position.set(ofRandomWidth(), ofRandomHeight());
    
    ofColor fireworkColor;
    fireworkColor.setHsb(255, 255, 190);
    for (int i=0; i<fireworks.size();i++){
        fireworks[i].setup(position.x,position.y,fireworkColor);
        
    }
}
void ofApp::update(){

    for (int i=0;i<fireworks.size();i++){
        fireworks[i].update();
        
    }
    if(fireworks[0].alpha<=0)
    FireworkRestart();

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255,255,255);
    wall.draw(0,0);
    //ofSetColor(0, 0, 0, 18);
    //ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    //wall.load("wall.jpg");
    //wall.draw(0,0);
    
    for(int i=0;i<fireworks.size();i++){

        fireworks[i].draw();


    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
