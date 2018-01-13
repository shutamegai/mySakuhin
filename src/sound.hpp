//
//  sound.hpp
//  mySakuhin
//
//  Created by Shu Tamegai on 2016/03/17.
//
//

#ifndef sound_hpp
#define sound_hpp

#include <stdio.h>
#pragma once
#include "ofMain.h"

class sound {
private:
    int sampleRate;
    float pan;
    float amp;
    float phase;
    float frequency;
    
public:
    sound();
    void setup();
    void draw();
    void update();
    void audioRequested(float * input, int bufferSize, int nChannels);
    
};

#endif /* sound_hpp */
