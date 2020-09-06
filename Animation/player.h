#pragma once
#include <SFML\Graphics.hpp>
using namespace sf;
class player {
private:

	Texture frame_T1;
	Texture frame_T2;
	Texture frame_T3;
	Texture frame_T4;
	Texture frame_T5;
	Texture frame_T6;
	Texture frame_T7;
	Texture frame_T8;
	Texture frame_T9;
	Texture frame_T10;

	Texture idle_T1;
	Texture idle_T2;
	Texture idle_T3;
	Texture idle_T4;
	Texture idle_T5;
	Texture idle_T6;
	Texture idle_T7;
	Texture idle_T8;
	Texture idle_T9;
	Texture idle_T10;


	Texture jump_T1;
	Texture jump_T2;
	Texture jump_T3;
	Texture jump_T4;
	Texture jump_T5;
	Texture jump_T6;
	Texture jump_T7;
	Texture jump_T8;
	Texture jump_T9;
	Texture jump_T10;


	Texture Slide_T1;
	Texture Slide_T2;
	Texture Slide_T3;
	Texture Slide_T4;
	Texture Slide_T5;
	Texture Slide_T6;
	Texture Slide_T7;
	Texture Slide_T8;
	Texture Slide_T9;
	Texture Slide_T10;


	Texture Die_T1;
	Texture Die_T2;
	Texture Die_T3;
	Texture Die_T4;
	Texture Die_T5;
	Texture Die_T6;
	Texture Die_T7;
	Texture Die_T8;
	Texture Die_T9;
	Texture Die_T10;


	Texture Blood_T1;
	Texture Blood_T2;
	Texture Blood_T3;
	Texture Blood_T4;
	Texture Blood_T5;
	Texture Blood_T6;
	Texture Blood_T7;
	Texture Blood_T8;
	Texture Blood_T9;
	Texture Blood_T10;

public:
	void TextureLoad();
	Sprite posi,sp;
	animation idleA;
	animation anim;
	animation jumpA;
	animation slideA;
	animation dieA;
	animation bloodA;

};