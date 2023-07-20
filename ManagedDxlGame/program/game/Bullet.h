#pragma once
#include "../dxlib_ext/dxlib_ext.h"

class Bullet {
public:
    struct BULLET {//弾の要素の設計図(要素の箱)
        tnl::Vector3 pos = { 0,0,0 };//弾のポジション＝初期値
        bool Life_Flag = false;//とりあえず死んだ状態に
    };
    //弾の全体の要素
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