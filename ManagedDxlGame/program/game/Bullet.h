#pragma once
#include "../dxlib_ext/dxlib_ext.h"

class Bullet {
public:
    struct BULLET {//�e�̗v�f�̐݌v�}(�v�f�̔�)
        tnl::Vector3 pos = { 0,0,0 };//�e�̃|�W�V�����������l
        bool Life_Flag = false;//�Ƃ肠�������񂾏�Ԃ�
    };
    //�e�̑S�̗̂v�f
    int SIZE_WIDTH = 5;
    int SIZE_HEIGHT = 5;
    int BULLET_SPEED = 5;
    const int T_Bullet = 200;
    int numBullet = 0;
    float count = 0;
    BULLET b[200];
    void update(float delta_time);
    void draw();
};
extern Bullet bullet;