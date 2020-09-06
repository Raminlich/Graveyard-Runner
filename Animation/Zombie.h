#pragma once
#include "Animation.h"
#include <SFML\Graphics.hpp>

class Zombie {
private:

	Texture Z_appear_T1;
	Texture Z_appear_T2;
	Texture Z_appear_T3;
	Texture Z_appear_T4;
	Texture Z_appear_T5;
	Texture Z_appear_T6;
	Texture Z_appear_T7;
	Texture Z_appear_T8;
	Texture Z_appear_T9;
	Texture Z_appear_T10;



	Texture Z_Attack_T1;
	Texture Z_Attack_T2;
	Texture Z_Attack_T3;
	Texture Z_Attack_T4;
	Texture Z_Attack_T5;
	Texture Z_Attack_T6;
	Texture Z_Attack_T7;
	Texture Z_Attack_T8;
	Texture Z_Attack_T9;
	Texture Z_Attack_T10;

public:
	animation Z_appearA;
	animation Z_AttackA;
	void TextureLoad();
};