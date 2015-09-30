//
//  cube.cpp
//  cube_practice
//
//  Created by 大樂裕貴 on 2015/10/01.
//
//

#include "cube.h"


void cube::setSize(float arg_size){
    size = arg_size;
}

void cube::setSpacing(float arg_spacing){
    spacing = arg_spacing;
}

void cube::setMovementSpeed(float arg_movementSpeed){
    movementSpeed = arg_movementSpeed;
}


void cube::setPosition(int arg_increment){
    float t =(ofGetElapsedTimef() + arg_increment * spacing) * movementSpeed;
    float x=ofSignedNoise(t,0,0);
    float y=ofSignedNoise(0,0,t);
    float z=ofSignedNoise(0,t,0);
    ofVec3f pos(x,y,z);
    pos *= cloudSize;
    ofTranslate(pos);
    ofRotateX(pos.x);
    ofRotateY(pos.y);
    ofRotateZ(pos.z);
}

//void cube::setColor(){
//    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
//}

void cube::draw(){
    ofFill();
    ofDrawBox(size);
    ofNoFill();
    ofDrawBox(size*2);
}
