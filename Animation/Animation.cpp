#include <SFML\Graphics.hpp>
#include "Animation.h"
using namespace std;
using namespace sf;

void animation::FrameSet(Texture frame1, Texture frame2, Texture frame3, Texture frame4, Texture frame5, Texture frame6, Texture frame7, Texture frame8, Texture frame9, Texture frame10) {
	frame_T1 = frame1;
	frame_T2 = frame2;
	frame_T3 = frame3;
	frame_T4 = frame4;
	frame_T5 = frame5;
	frame_T6 = frame6;
	frame_T7 = frame7;
	frame_T8 = frame8;
	frame_T9 = frame9;
	frame_T10 = frame10;
}
Sprite animation::DoAnimation(Sprite sp_transfer) {


	if (i <= 5) {
		sp_transfer.setTexture(frame_T1);
		i++;
		if (i == 5) {
			x = 1;

		}

	}
	if (j <= 5 && x == 1) {
		sp_transfer.setTexture(frame_T2);
		j++;
		if (j == 5) {
			x = 2;
		}
	}
	if (a <= 5 && x == 2) {
		sp_transfer.setTexture(frame_T3);
		a++;
		if (a == 5) {
			x = 3;

		}
	}
	if (b <= 5 && x == 3) {
		sp_transfer.setTexture(frame_T4);
		b++;
		if (b == 5) {
			x = 4;

		}
	}
	if (c <= 5 && x == 4) {
		sp_transfer.setTexture(frame_T5);
		c++;
		if (c == 5) {
			x = 6;

		}
	}

	if (d <= 5 && x == 6) {
		sp_transfer.setTexture(frame_T6);
		d++;
		if (d == 5) {
			x = 7;

		}
	}
	if (e <= 5 && x == 7) {
		sp_transfer.setTexture(frame_T7);
		e++;
		if (e == 5) {
			x = 8;

		}
	}
	if (f <= 5 && x == 8) {
		sp_transfer.setTexture(frame_T8);
		f++;
		if (f == 5) {
			x = 9;

		}
	}
	if (g <= 5 && x == 9) {
		sp_transfer.setTexture(frame_T9);
		g++;
		if (g == 5) {
			x = 10;

		}
	}

	if (h <= 5 && x == 10) {
		sp_transfer.setTexture(frame_T10);
		h++;
		if (h == 5) {
			x = 11;

		}
	}

	if (h == 5) {
		i = 0, j = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0
			;
	}

	return sp_transfer;
}

Sprite animation::OneTimeAnimation(Sprite sp_Transfer) {
	int x = 0;
	if (x <= 30) {
		DoAnimation(sp_Transfer);
		x++;
	}
	return sp_Transfer;
}