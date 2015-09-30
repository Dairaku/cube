//
//  cube.h
//  cube_practice
//
//  Created by 大樂裕貴 on 2015/10/01.
//
//

#ifndef __cube_practice__cube__
#define __cube_practice__cube__

#include <stdio.h>
#include "ofMain.h"

#endif /* defined(__cube_practice__cube__) */

class cube{
    
private:
    float size; //cubeのサイズ
    float spacing;
    float movementSpeed;
    float color;
    
public:
    //cube(){}; //コンストラクタ
    void draw();
    void setSize(float arg_size);
    void setSpacing(float arg_spacing);
    void setMovementSpeed(float arg_movementSpeed);
    void setPosition(int arg_increment);
    //void setColor();
    float cloudSize = ofGetWidth()/2;
};