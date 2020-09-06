#include "Zombie.h"

void Zombie::TextureLoad() {
	if (!Z_appear_T1.loadFromFile("Data/Zombie/appear/Frame1.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T2.loadFromFile("Data/Zombie/appear/Frame2.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T3.loadFromFile("Data/Zombie/appear/Frame3.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T4.loadFromFile("Data/Zombie/appear/Frame4.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T5.loadFromFile("Data/Zombie/appear/Frame5.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T6.loadFromFile("Data/Zombie/appear/Frame6.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T7.loadFromFile("Data/Zombie/appear/Frame7.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T8.loadFromFile("Data/Zombie/appear/Frame8.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T9.loadFromFile("Data/Zombie/appear/Frame9.png"))
		exit(EXIT_FAILURE);

	if (!Z_appear_T10.loadFromFile("Data/Zombie/appear/Frame10.png"))
		exit(EXIT_FAILURE);



	if (!Z_Attack_T1.loadFromFile("Data/Zombie/Attack/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T2.loadFromFile("Data/Zombie/Attack/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T3.loadFromFile("Data/Zombie/Attack/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T4.loadFromFile("Data/Zombie/Attack/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T5.loadFromFile("Data/Zombie/Attack/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T6.loadFromFile("Data/Zombie/Attack/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T7.loadFromFile("Data/Zombie/Attack/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T8.loadFromFile("Data/Zombie/Attack/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T9.loadFromFile("Data/Zombie/Attack/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!Z_Attack_T10.loadFromFile("Data/Zombie/Attack/Frame10.png"))
		exit(EXIT_FAILURE);






	Z_appearA.FrameSet(Z_appear_T1, Z_appear_T2, Z_appear_T3, Z_appear_T4, Z_appear_T5, Z_appear_T6, Z_appear_T7, Z_appear_T8, Z_appear_T9, Z_appear_T10);
	Z_AttackA.FrameSet(Z_Attack_T1, Z_Attack_T2, Z_Attack_T3, Z_Attack_T4, Z_Attack_T5, Z_Attack_T6, Z_Attack_T7, Z_Attack_T8, Z_Attack_T9, Z_Attack_T10);
}