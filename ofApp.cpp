#include "ofApp.h"
#define INITIAL_NUM_OF_CUBES 10


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofBackground(0,0,0);
    ofSetFrameRate(100);
    for(int i= 0; i < INITIAL_NUM_OF_CUBES;i++){
        cubes.push_back(new cube());
        cubes.at(i)->setSize(ofRandom(30));
        cubes.at(i)->setSpacing(ofRandom(20));
        cubes.at(i)->setMovementSpeed(ofRandom(1));
        //cubes.at(i)->setColor();
 
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    for(int i=0;i<cubes.size();i++){
        ofPushMatrix();
        cubes.at(i)->setPosition(i);
        cubes.at(i)->draw();
        ofPopMatrix();
    }
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == OF_KEY_UP){
        cubes.push_back(new cube());
        cubes.back()->setSize(ofRandom(30));
        cubes.back()->setSpacing(ofRandom(20));
        cubes.back()->setMovementSpeed(ofRandom(1));

    }
    if(key == OF_KEY_DOWN && cubes.size()>0){
        cubes.pop_back();
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
