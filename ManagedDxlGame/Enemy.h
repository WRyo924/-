#include "../dxlib_ext/dxlib_ext.h"

class Enemy
{
public:
    struct ENEMY {//�e�̗v�f�̐݌v�}(�v�f�̔�)
        tnl::Vector3 pos = { 0,0,0 };//�e�̃|�W�V�����������l
        bool Life_Flag = false;//�Ƃ肠�������񂾏�Ԃ�
    };
    //�e�̑S�̗̂v�f
    int SIZE_WIDTH = 10;
    int SIZE_HEIGHT = 10;
    int ENEMY_SPEED = 5;
    const int T_Enemy = 200;//���v�̓G
    int numEnemy = 0;
    float count = 0;
    ENEMY Enemys[200];
    void update(float delta_time);
    void draw();
};