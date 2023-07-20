#include "../dxlib_ext/dxlib_ext.h"
#include "player.h"
#include "Enemy.h"

Player player;

void Player::update(float delta_time)
{
	if (tnl::Input::IsKeyDown(eKeys::KB_LEFT))pos_.x -= Player::MOVE_SPEED;//左に動く
	if (tnl::Input::IsKeyDown(eKeys::KB_RIGHT))pos_.x += Player::MOVE_SPEED;//右に動く

	for (int i = 0; i < enemy.T_Enemy; i++){
		if (player_Life > 0) {		
			int top = enemy.Enemys[i].pos.y-10 ;
			int bot = enemy.Enemys[i].pos.y+10 ;
			int right = enemy.Enemys[i].pos.x+10 ;
			int left = enemy.Enemys[i].pos.x-10 ;
			if (pos_.y < top && pos_.x-Player::SIZE_WIDTH < left && pos_.x+ Player::SIZE_WIDTH > right) { //敵がプレイヤーの座標に入ったら
				player_Life = player_Life - 1;//残機減らす
				break;
			}
		}
	}
	//if (tnl::Input::IsKeyDownTrigger(eKeys::KB_Z))player_Life = player_Life + 1;	
	DrawStringEx(0, 0,-1,"%d",player_Life);
}

void Player::draw(){
	DrawBoxEx(pos_, Player::SIZE_WIDTH, Player::SIZE_HEIGHT, false);

}
