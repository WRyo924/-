#pragma once
#include "../dxlib_ext/dxlib_ext.h"

class Enemy
{
public:
    struct ENEMY {
        tnl::Vector3 pos = { 0,0,0 };
        bool Life_Flag = false;//とりあえず死んだ状態に
    };
    //弾の全体の要素
    int SIZE_WIDTH = 20;
    int SIZE_HEIGHT = 20;
    int ENEMY_SPEED = 2;
    static constexpr int T_Enemy = 200;//合計の敵
    int numEnemy = 0;
    float count = 0;
    ENEMY Enemys[ T_Enemy ];
    void update(float delta_time);
    void draw();
};
extern  Enemy enemy;