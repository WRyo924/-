#include "../dxlib_ext/dxlib_ext.h"

class Enemy
{
public:
    struct ENEMY {//弾の要素の設計図(要素の箱)
        tnl::Vector3 pos = { 0,0,0 };//弾のポジション＝初期値
        bool Life_Flag = false;//とりあえず死んだ状態に
    };
    //弾の全体の要素
    int SIZE_WIDTH = 10;
    int SIZE_HEIGHT = 10;
    int ENEMY_SPEED = 5;
    const int T_Enemy = 200;//合計の敵
    int numEnemy = 0;
    float count = 0;
    ENEMY Enemys[200];
    void update(float delta_time);
    void draw();
};