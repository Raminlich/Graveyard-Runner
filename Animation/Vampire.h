#pragma once
#include <SFML\Graphics.hpp>
#include "Animation.h"
using namespace sf;

class Vampire {
private:
	Texture throw_T1;
	Texture throw_T2;
	Texture throw_T3;
	Texture throw_T4;
	Texture throw_T5;
	Texture throw_T6;
	Texture throw_T7;
	Texture throw_T8;
	Texture throw_T9;
	Texture throw_T10;




	Texture run_T1;
	Texture run_T2;
	Texture run_T3;
	Texture run_T4;
	Texture run_T5;
	Texture run_T6;
	Texture run_T7;
	Texture run_T8;
	Texture run_T9;
	Texture run_T10;



	Texture Fire_T1;
	Texture Fire_T2;
	Texture Fire_T3;
	Texture Fire_T4;
	Texture Fire_T5;
	Texture Fire_T6;
	Texture Fire_T7;
	Texture Fire_T8;
	Texture Fire_T9;
	Texture Fire_T10;



	Texture Shock_T1;
	Texture Shock_T2;
	Texture Shock_T3;
	Texture Shock_T4;
	Texture Shock_T5;
	Texture Shock_T6;
	Texture Shock_T7;
	Texture Shock_T8;
	Texture Shock_T9;
	Texture Shock_T10;
public:
	void TextureLoad();
	animation throwA;
	animation runA;
	animation FireBall;
	animation ShockWave;
};