//
//  Created by Shu Tamegai on 2016/03/17.
//
//

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mySquare.setup();
    mySound.setup();
    
    ofBackground(255, 255, 255);
    ofEnableAlphaBlending();
    ofSetFrameRate(100);
}

//--------------------------------------------------------------
void ofApp::update(){
    mySquare.update();
    mySound.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    mySquare.draw();
    mySound.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'f') {
        ofToggleFullscreen();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    //mySquare.setLoc_x(x);
    mySquare.setCenter(y/2);
    mySquare.setSpeed(x/10);
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

//--------------------------------------------------------------
void ofApp::audioRequested(float * input, int bufferSize, int nChannels) {
    mySound.audioRequested(float * input, int bufferSize, int nChannels);
}
