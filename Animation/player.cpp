#include "Animation.h"
#include "player.h"

void player::TextureLoad() {
	if (!idle_T1.loadFromFile("Data/IdleFrames/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!idle_T2.loadFromFile("Data/IdleFrames/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!idle_T3.loadFromFile("Data/IdleFrames/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!idle_T4.loadFromFile("Data/IdleFrames/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!idle_T5.loadFromFile("Data/IdleFrames/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!idle_T6.loadFromFile("Data/IdleFrames/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!idle_T7.loadFromFile("Data/IdleFrames/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!idle_T8.loadFromFile("Data/IdleFrames/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!idle_T9.loadFromFile("Data/IdleFrames/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!idle_T10.loadFromFile("Data/IdleFrames/Frame10.png"))
		exit(EXIT_FAILURE);






	if (!frame_T1.loadFromFile("Data/RunningFrames/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!frame_T2.loadFromFile("Data/RunningFrames/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!frame_T3.loadFromFile("Data/RunningFrames/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!frame_T4.loadFromFile("Data/RunningFrames/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!frame_T5.loadFromFile("Data/RunningFrames/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!frame_T6.loadFromFile("Data/RunningFrames/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!frame_T7.loadFromFile("Data/RunningFrames/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!frame_T8.loadFromFile("Data/RunningFrames/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!frame_T9.loadFromFile("Data/RunningFrames/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!frame_T10.loadFromFile("Data/RunningFrames/Frame10.png"))
		exit(EXIT_FAILURE);




	if (!jump_T1.loadFromFile("Data/jumpFrames/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!jump_T2.loadFromFile("Data/jumpFrames/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!jump_T3.loadFromFile("Data/jumpFrames/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!jump_T4.loadFromFile("Data/jumpFrames/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!jump_T5.loadFromFile("Data/jumpFrames/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!jump_T6.loadFromFile("Data/jumpFrames/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!jump_T7.loadFromFile("Data/jumpFrames/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!jump_T8.loadFromFile("Data/jumpFrames/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!jump_T9.loadFromFile("Data/jumpFrames/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!jump_T10.loadFromFile("Data/jumpFrames/Frame10.png"))
		exit(EXIT_FAILURE);







	if (!Slide_T1.loadFromFile("Data/SlideFrames/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T2.loadFromFile("Data/SlideFrames/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T3.loadFromFile("Data/SlideFrames/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T4.loadFromFile("Data/SlideFrames/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T5.loadFromFile("Data/SlideFrames/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T6.loadFromFile("Data/SlideFrames/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T7.loadFromFile("Data/SlideFrames/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T8.loadFromFile("Data/SlideFrames/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T9.loadFromFile("Data/SlideFrames/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!Slide_T10.loadFromFile("Data/SlideFrames/Frame10.png"))
		exit(EXIT_FAILURE);







	if (!Die_T1.loadFromFile("Data/PlayerDeathFrames/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!Die_T2.loadFromFile("Data/PlayerDeathFrames/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!Die_T3.loadFromFile("Data/PlayerDeathFrames/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!Die_T4.loadFromFile("Data/PlayerDeathFrames/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!Die_T5.loadFromFile("Data/PlayerDeathFrames/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!Die_T6.loadFromFile("Data/PlayerDeathFrames/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!Die_T7.loadFromFile("Data/PlayerDeathFrames/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!Die_T8.loadFromFile("Data/PlayerDeathFrames/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!Die_T9.loadFromFile("Data/PlayerDeathFrames/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!Die_T10.loadFromFile("Data/PlayerDeathFrames/Frame10.png"))
		exit(EXIT_FAILURE);



	if (!Blood_T1.loadFromFile("Data/Blood/Frame1.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T2.loadFromFile("Data/Blood/Frame2.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T3.loadFromFile("Data/Blood/Frame3.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T4.loadFromFile("Data/Blood/Frame4.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T5.loadFromFile("Data/Blood/Frame5.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T6.loadFromFile("Data/Blood/Frame6.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T7.loadFromFile("Data/Blood/Frame7.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T8.loadFromFile("Data/Blood/Frame8.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T9.loadFromFile("Data/Blood/Frame9.png"))
		exit(EXIT_FAILURE);
	if (!Blood_T10.loadFromFile("Data/Blood/Frame10.png"))
		exit(EXIT_FAILURE);




	jumpA.FrameSet(jump_T1, jump_T2, jump_T3, jump_T4, jump_T5, jump_T6, jump_T7, jump_T8, jump_T9, jump_T10);
	idleA.FrameSet(idle_T1, idle_T2, idle_T3, idle_T4, idle_T5, idle_T6, idle_T7, idle_T8, idle_T9, idle_T10);
	anim.FrameSet(frame_T1, frame_T2, frame_T3, frame_T4, frame_T5, frame_T6, frame_T7, frame_T8, frame_T9, frame_T10);
	slideA.FrameSet(Slide_T1, Slide_T2, Slide_T3, Slide_T4, Slide_T5, Slide_T6, Slide_T7, Slide_T8, Slide_T9, Slide_T10);
	dieA.FrameSet(Die_T1, Die_T2, Die_T3, Die_T4, Die_T5, Die_T6, Die_T7, Die_T8, Die_T9, Die_T10);
	bloodA.FrameSet(Blood_T1, Blood_T2, Blood_T3, Blood_T4, Blood_T5, Blood_T6, Blood_T7, Blood_T8, Blood_T9, Blood_T10);
}