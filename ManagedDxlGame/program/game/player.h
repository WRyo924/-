#pragma once
#include "../dxlib_ext/dxlib_ext.h"

class Player {
public:
	static constexpr int MOVE_SPEED = 5;
	static constexpr int SIZE_WIDTH = 100;
	static constexpr int SIZE_HEIGHT = 30;
	
	int player_Life = 3;

	//playerÇÃèâä˙à íu xzxx
	tnl::Vector3 pos_ = { DXE_WINDOW_WIDTH / 2,DXE_WINDOW_HEIGHT * 0.8f,0 };

	void update(float delta_time);
	void draw();
};

extern Player player;