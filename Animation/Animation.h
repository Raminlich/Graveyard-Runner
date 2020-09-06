#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;

class animation {
private:
	int i = 0, j = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
	int x = 0;
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
	Sprite  Frame_SP;
public:
	void FrameSet(Texture, Texture, Texture, Texture, Texture, Texture, Texture, Texture, Texture, Texture);
	Sprite OneTimeAnimation(Sprite);
	Sprite DoAnimation(Sprite);
};