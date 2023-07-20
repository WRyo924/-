#include "gm_main.h"
#include "Bullet.h"
#include "player.h"
#include "Enemy.h"

Bullet bullet;

void Bullet::update(float delta_time) {
    count += delta_time * 60;
    if (tnl::Input::IsKeyDown(eKeys::KB_SPACE) && count > 6) {
        if (numBullet < T_Bullet) {
            b[numBullet].Life_Flag = true;
            b[numBullet].pos.x = player.pos_.x;
            b[numBullet].pos.y = player.pos_.y;
        }
        else {
            numBullet = 0;
        }
        numBullet++;
        count = 0;//’e‚Ì²ÝÀ°ÊÞÙ‚ÌƒŠƒZƒbƒg
    }
    //‘S‘Ì‚Ì’e‚Ì“®‚«
    for (int i = 0; i < numBullet; i++) {
        if (b[i].Life_Flag == true) {
            b[i].pos.y -= BULLET_SPEED * delta_time * 60;
            for (int j = 0; j < enemy.numEnemy; j++) {
                if (enemy.Enemys[j].Life_Flag == true) {
                    //int top = enemy.Enemys[j].pos.y - 10/2;
                    int bot = enemy.Enemys[j].pos.y + 20 / 2;
                    int right = enemy.Enemys[j].pos.x + 20 / 2;
                    int left = enemy.Enemys[j].pos.x - 20 / 2;
                    if (b[i].pos.y < bot && b[i].pos.x >left && b[i].pos.x < right) {
                        b[i].Life_Flag = false;
                        enemy.Enemys[j].Life_Flag = false;
                        break;
                    }
                }
            }
            if (b[i].pos.y < 0) {
                b[i].Life_Flag = false;
            }
        }
    }


}
void Bullet::draw() {
    for (int i = 0; i < numBullet; i++) {
        if (b[i].Life_Flag == true) {
            DrawBoxEx(b[i].pos, Bullet::SIZE_WIDTH, Bullet::SIZE_HEIGHT, true, RGB(200, 200, 200));
        }
    }
}