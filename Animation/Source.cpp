#include <SFML\Graphics.hpp>
#include <iostream>
#include "Animation.h"
#include "player.h"
#include "Vampire.h"
#include "Zombie.h"
using namespace sf;
using namespace std;

int main() {
	RenderWindow window(VideoMode(1000, 700), "GraveYard");
lable:
	Texture wasteland,blade,ghost,Spike,spikeColl,secondSpike,ShockWave;
	Sprite  np,sp, worldSP,blade_SP,ghost_s,SSpike,SSpikeColl,SSecond,secondColl,zombieS,ZombieATTACK,spellDamage,S_ShockWave,BloodS;
	player play;
	Vampire  vampire;
	Zombie zombie;
	Text GameOver;
	Text Menu;
	Font font;


	if (!spikeColl.loadFromFile("Data/SpikeCollison.png"))
		exit(EXIT_FAILURE);

	if (!secondSpike.loadFromFile("Data/Spike.png"))
		exit(EXIT_FAILURE);

	if (!Spike.loadFromFile("Data/spike.png"))
		exit(EXIT_FAILURE);

	if (!ghost.loadFromFile("Data/ghost.png"))
		exit(EXIT_FAILURE);

	if (!font.loadFromFile("Data/ARLRDBD.TTF"))
		exit(EXIT_FAILURE);

	if (!wasteland.loadFromFile("Data/swamp.png"))
		exit(EXIT_FAILURE);

	if (!blade.loadFromFile("Data/spellDamage.png"))
		exit(EXIT_FAILURE);


	GameOver.setString("                   \n\n\n\n\n                                            You died x( \n                                            GAME OVER\n                                            Press R to try again");
	Menu.setString("  \n\n                              Press Space to Start or press ESC to exit\n\n                              Space: Jump\n                              S:Tackle\n                              A:Go Left\n                              D:Go Right");
	GameOver.setFont(font);
	Menu.setFont(font);
	play.TextureLoad();
	vampire.TextureLoad();
	zombie.TextureLoad();
	worldSP.setTexture(wasteland);
	spellDamage.setTexture(blade);
	ghost_s.setTexture(ghost);
	ZombieATTACK.setTexture(ghost);
	secondColl.setTexture(spikeColl);

	SSpike.setTexture(Spike);
	SSpikeColl.setTexture(spikeColl);


	SSecond.setTexture(secondSpike);



	S_ShockWave.setPosition(500, 250);
	sp.setPosition(80, 230);
	zombieS.setPosition(3000, 250);
	ZombieATTACK.setPosition(3000, 250);
	np.setPosition(4700, 250);
	SSpike.setPosition(2000, 278); 
	SSecond.setPosition(1500, 278);
	secondColl.setPosition(1500, 278);
	worldSP.setPosition(0, 0);
	SSpikeColl.setPosition(2000, 278);


	Vector2f PP = sp.getPosition();
	int x = 0 , bladeFly=0,death=0,DieOn=0,ZombieAppear=0,VampireRunAway=0;
	int jumpSwitch = 0, jumpUp = 0 , jumpDown=0 , u=0 , slideSwitch=0, slideDown = 0 , slideUp = 0 , state=1;
	bool loop = false;
	float position;




	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if ((event.type == Event::Closed) || (event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)) {
				window.close();
			}
		}


		window.setFramerateLimit(5);

		if (Keyboard::isKeyPressed(Keyboard::Space))
			state = 0;


		if (state == 0) {

			window.clear();
			window.setFramerateLimit(60);



			// running
			if (Keyboard::isKeyPressed(Keyboard::D)) {

				if (death == 1 || death == 2 || x==4150) {
					sp.move(0, 0);
				}
				else {
					sp.move(5, 0);
				}
			}
			if (Keyboard::isKeyPressed(Keyboard::A)) {
				if (death == 1 || death == 2 || x == 4150) {
					sp.move(0, 0);
				}
				else {
					sp.move(-5, 0);
				}
			}

			float playX = sp.getPosition().x;

			if (playX == 0) {
				sp.move(5, 0);
			}


			if (u == 0) {
				
				window.draw(worldSP);
				worldSP.move(-2, 0);
				window.draw(SSecond);
				SSecond.move(-2, 0);
				window.draw(SSpike);
				SSpike.move(-2, 0);
				if (x != 4150) {
					window.draw(play.anim.DoAnimation(sp));
				}
				else {
					window.draw(play.idleA.DoAnimation(sp));
				}

				//running
				position = worldSP.getPosition().x;
			}
			if (x < 4150) {
				x += 2;
			}
			else {
				worldSP.move(2, 0);

			}


			//jumping 
			if (Keyboard::isKeyPressed(Keyboard::Space) && u == 0) {
				jumpSwitch = 1;
				u = 1;
			}

			if (jumpSwitch == 1) {
				window.draw(worldSP);
				worldSP.move(-2, 0);
				window.draw(SSecond);
				SSecond.move(-2, 0);

				window.draw(SSpike);
				SSpike.move(-2, 0);
				window.draw(play.jumpA.DoAnimation(sp));
				if (jumpUp != 15) {
					sp.move(0, -10);
					jumpUp++;
				}
				if (jumpDown <= 15 && jumpUp == 15) {
					sp.move(0, 10);
					jumpDown++;
				}
			}
			if (jumpUp == 15 && jumpDown == 15) {
				jumpSwitch = 0;
				jumpUp = 0;
				jumpDown = 0;
				u = 0;

			}
			// jumping end


			// sliding
			if (Keyboard::isKeyPressed(Keyboard::S) && u == 0) {
				u = 1;
				slideSwitch = 1;
			}
			if (slideSwitch == 1) {
				window.draw(worldSP);
				worldSP.move(-2, 0);
				window.draw(SSecond);
				SSecond.move(-2, 0);
				window.draw(SSpike);
				SSpike.move(-2, 0);
				window.draw(play.slideA.DoAnimation(sp));
				if (slideUp != 15) {
					sp.move(0, 6);
					slideUp++;
				}
				if (slideDown <= 15 && slideUp == 15) {
					sp.move(0, -6);
					slideDown++;
				}
			}
			if (slideUp == 15 && slideDown == 15) {
				slideSwitch = 0;
				slideUp = 0;
				slideDown = 0;
				u = 0;
			}
			// sliding end

			//vamppire actions
			if (x != 4150) {
				window.draw(vampire.throwA.DoAnimation(np));
				np.move(-2, 0);

				if (bladeFly < 160) {
					window.draw(spellDamage);
					Vector2f spellPosi =blade_SP.getPosition() ;
					spellDamage.setPosition(spellPosi);
					window.draw(vampire.FireBall.DoAnimation(blade_SP));
					blade_SP.move(-15, 0);
					bladeFly++;
				}
				else {
					blade_SP.setPosition(2000, 250);
					bladeFly = 0;
				}

			}
			else {
				if (VampireRunAway <= 30) {
					window.draw(vampire.runA.DoAnimation(np));
					VampireRunAway++;
				}
			}
			//vampire actions end

			// Zombie actions
			zombieS.move(-2, 0);
			ZombieATTACK.move(-2, 0);
			if (x > 2500) {
				if (ZombieAppear <= 30) {

					window.draw(zombie.Z_appearA.DoAnimation(zombieS));
					ZombieAppear++;

				}

			}
			cout << ZombieAppear;
			if (ZombieAppear == 31) {
				cout << "Zombies";
				window.draw(zombie.Z_AttackA.DoAnimation(zombieS));
				window.draw(ZombieATTACK);
			}
			// Zombie actions end



			// player death
			Vector2f playerP = sp.getPosition();
			ghost_s.setPosition(playerP);

			window.draw(ghost_s);
			window.draw(secondColl);
			window.draw(SSpikeColl);
			SSpikeColl.move(-2, 0);
			secondColl.move(-2, 0);

			FloatRect PlayerBound = ghost_s.getGlobalBounds();
			FloatRect BladeBound = spellDamage.getGlobalBounds();
			FloatRect SpikeBound = SSpikeColl.getGlobalBounds();
			FloatRect SecondBound = secondColl.getGlobalBounds();
			FloatRect ZombieClaws = ZombieATTACK.getGlobalBounds();

			if ( PlayerBound.intersects(SpikeBound) || PlayerBound.intersects(SecondBound) || PlayerBound.intersects(ZombieClaws))
				u = 4;


			if (u == 4) {
				window.clear();
				death = 1;
				cout << "detected";
			}

			if (death == 1) {

				if (DieOn <= 40) {
					PP = sp.getPosition();
					BloodS.setPosition(PP);
					window.draw(worldSP);
					window.draw(SSpike);
					window.draw(SSecond);
					sp.setPosition(PP);
					window.draw(play.dieA.DoAnimation(sp));
					window.draw(zombie.Z_AttackA.DoAnimation(zombieS));
					window.draw(play.bloodA.DoAnimation(BloodS));
					DieOn++;
				}
				if (DieOn == 41)

					state = 2;

			}

			if (PlayerBound.intersects(BladeBound))
				u = 5;

			if (u == 5) {
				window.clear();
				death = 2;
				cout << "detected";
			}

			if (death == 2) {

				if (DieOn <= 40) {
					PP = sp.getPosition();
					S_ShockWave.setPosition(PP);
					window.draw(worldSP);

					window.draw(SSpike);
					window.draw(SSecond);
					sp.setPosition(PP);
					
					window.draw(play.dieA.DoAnimation(sp));
					window.draw(zombie.Z_AttackA.DoAnimation(zombieS));
					window.draw(vampire.ShockWave.DoAnimation(S_ShockWave));
					DieOn++;
				}
				if (DieOn == 41)

					state = 2;

			}

			
			// player death end
			window.display();
		}






		// User interface
		if (state == 1) {
			window.clear(Color::Green);
			window.draw(Menu);
			window.display();
		}
		if (state == 2) {
			window.clear(Color::Red);
			window.draw(GameOver);
			window.display();
			if (Keyboard::isKeyPressed(Keyboard::R)) {
				goto lable;
			}


		}



	}
}