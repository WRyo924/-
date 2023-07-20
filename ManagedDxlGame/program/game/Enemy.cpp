#include "Enemy.h"

Enemy enemy;

void Enemy::update(float delta_time)
{
    count += delta_time * 60;
    if (count > 6) {
        if (numEnemy < T_Enemy) {
            int RandomX = (int)tnl::GetRandomDistributionFloat(0, 1280);//‹^——”‚ÅEnemy‚Ì‰ŠúˆÊ’u‚ğw’è
            int RandomY = 0;//
            Enemys[numEnemy].Life_Flag = true;
            Enemys[numEnemy].pos.x = RandomX;
            Enemys[numEnemy].pos.y = RandomY;
        }
        else {
            numEnemy = 0;
        }
        numEnemy++;
        count = 0;//’e‚Ì²İÀ°ÊŞÙ‚ÌƒŠƒZƒbƒg
    }
    //‘S‘Ì‚Ì’e‚Ì“®‚«
    for (int i = 0; i < numEnemy; i++) {
        if (Enemys[i].Life_Flag == true) {
            Enemys[i].pos.y += ENEMY_SPEED * delta_time * 60;
            if (Enemys[i].pos.y < 0) {
                Enemys[i].Life_Flag = false;
            }
        }
    }
}

void Enemy::draw()
{
    for (int i = 0; i < numEnemy; i++) {
        if (Enemys[i].Life_Flag == true) {
            DrawBoxEx(Enemys[i].pos, SIZE_WIDTH, SIZE_HEIGHT, true, RGB(200, 200, 200));
        }
    }
}