//
//  FireworkParticle.hpp
//  mySketch
//
//  Created by 七间 on 08/11/2017.
//
//

#ifndef FireworkParticle_hpp
#define FireworkParticle_hpp

#include <stdio.h>

#include "ofMain.h"

class FireworkParticle{
    public:
    void setup(int x, int y, ofColor _color);
    void update();
    void draw();
    
    ofPoint position;
    ofPoint velocity;
    ofPoint acceleration;
    ofColor color;
    int alpha;

};

#endif /* FireworkParticle_hpp */
