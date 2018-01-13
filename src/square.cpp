//
//  square.cpp
//  mySakuhin
//
//  Created by Shu Tamegai on 2016/03/17.
//
//

#include "square.hpp"

square::square() {
    center = 50;
    speed = 0;
    min_x = ofGetWidth()/2;
    //max_x = ofGetWidth()/2 + center;
}

//--------------------------------------------------------------
void square::setup() {
    point = min_x - center;
    //point_x = min_x + center;
    //point_max = ofGetWidth() + 2 * center;
    //point_x = min_x - center;
}

//--------------------------------------------------------------
void square::update() {
    //point = min_x - center;
    //point_x = min_x + center;
    //point_max = ofGetWidth() + 2 * center;
    
    min_x += speed;
    point += speed;
    //max_x += speed;
    
    if (point - center + 50> ofGetWidth()) {
        point = -center - 50;
    }
    
    /*if (max_x > ofGetWidth()) {
        max_x = 0;
    }*/
}

//--------------------------------------------------------------
void square::draw() {
    ofSetColor(0, 0, 0, 255);
    ofRect(ofGetWidth()/2 - 5, ofGetHeight()/2, 10, ofGetHeight());
    ofRect(point - center + 50, 0, 2 * center, ofGetHeight()/2);
    
    /*for (point = -2 * center; point < ofGetWidth(); point++) {
        ofRect(point, 0, 2 * center, ofGetHeight()/2);
    }*/
    
    /*if (max_x > ofGetWidth() && min_x < ofGetWidth()) {
        ofRect(0, 0, max_x - ofGetWidth(), ofGetHeight()/2);
    }*/
}

//--------------------------------------------------------------
/*void square::setLoc_x(float _loc_x){
    loc_x = _loc_x;
}

float square::getLoc_x() {
    return loc_x;
}*/

void square::setSpeed(float _speed){
    speed = _speed;
}

float square::getSpeed() {
    return speed;
}

void square::setCenter(float _center) {
    center = _center;
}

float square::getCenter() {
    return center;
}
