#include "Vampire.h"

void Vampire::TextureLoad() {
	if (!throw_T1.loadFromFile("Data/throw/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!throw_T2.loadFromFile("Data/throw/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!throw_T3.loadFromFile("Data/throw/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!throw_T4.loadFromFile("Data/throw/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!throw_T5.loadFromFile("Data/throw/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!throw_T6.loadFromFile("Data/throw/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!throw_T7.loadFromFile("Data/throw/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!throw_T8.loadFromFile("Data/throw/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!throw_T9.loadFromFile("Data/throw/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!throw_T10.loadFromFile("Data/throw/Frame10.png"))
		exit(EXIT_FAILURE);


	if (!run_T1.loadFromFile("Data/EnemyRun/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!run_T2.loadFromFile("Data/EnemyRun/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!run_T3.loadFromFile("Data/EnemyRun/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!run_T4.loadFromFile("Data/EnemyRun/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!run_T5.loadFromFile("Data/EnemyRun/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!run_T6.loadFromFile("Data/EnemyRun/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!run_T7.loadFromFile("Data/EnemyRun/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!run_T8.loadFromFile("Data/EnemyRun/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!run_T9.loadFromFile("Data/EnemyRun/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!run_T10.loadFromFile("Data/EnemyRun/Frame10.png"))
		exit(EXIT_FAILURE);


	if (!Fire_T1.loadFromFile("Data/Fireball/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T2.loadFromFile("Data/Fireball/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T3.loadFromFile("Data/Fireball/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T4.loadFromFile("Data/Fireball/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T5.loadFromFile("Data/Fireball/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T6.loadFromFile("Data/Fireball/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T7.loadFromFile("Data/Fireball/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T8.loadFromFile("Data/Fireball/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T9.loadFromFile("Data/Fireball/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!Fire_T10.loadFromFile("Data/Fireball/Frame10.png"))
		exit(EXIT_FAILURE);



	if (!Shock_T1.loadFromFile("Data/Shockwave/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T2.loadFromFile("Data/Shockwave/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T3.loadFromFile("Data/Shockwave/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T4.loadFromFile("Data/Shockwave/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T5.loadFromFile("Data/Shockwave/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T6.loadFromFile("Data/Shockwave/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T7.loadFromFile("Data/Shockwave/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T8.loadFromFile("Data/Shockwave/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T9.loadFromFile("Data/Shockwave/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!Shock_T10.loadFromFile("Data/Shockwave/Frame10.png"))
		exit(EXIT_FAILURE);


	runA.FrameSet(run_T1, run_T2, run_T3, run_T4, run_T5, run_T6, run_T7, run_T8, run_T9, run_T10);
	throwA.FrameSet(throw_T1, throw_T2, throw_T3, throw_T4, throw_T5, throw_T6, throw_T7, throw_T8, throw_T9, throw_T10);
	FireBall.FrameSet(Fire_T1, Fire_T2, Fire_T3, Fire_T4, Fire_T5, Fire_T6, Fire_T7, Fire_T8, Fire_T9, Fire_T10);
	ShockWave.FrameSet(Shock_T1, Shock_T2, Shock_T3, Shock_T4, Shock_T5, Shock_T6, Shock_T7, Shock_T8, Shock_T9, Shock_T10);

}