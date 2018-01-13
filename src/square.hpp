//
//  square.hpp
//  mySakuhin
//
//  Created by Shu Tamegai on 2016/03/17.
//
//

#ifndef square_hpp
#define square_hpp

#include <stdio.h>
#pragma once
#include "ofMain.h"

class square {
private:
    float center;
    float min_x;
    //float max_x;
    float speed;
    
public:
    square();
    void setup();
    void draw();
    void update();
    //void setLoc_x(float loc_x);
    //float getLoc_x();
    void setSpeed(float speed);
    float getSpeed();
    void setCenter(float center);
    float getCenter();
    float point;
    //float point_x;
    //float point_max;
    //float point_x;
    //int i;
};

#endif /* square_hpp */
