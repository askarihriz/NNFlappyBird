#include "LeaderBoard.h"

LeaderBoard::LeaderBoard()
{
	isClicked = false;
}

void LeaderBoard::Initialize(SDL_Renderer* ren)
{
	LeaderBoardBackground.setSrc(0, 0, 280, 369);
	LeaderBoardBackground.setDest(400 - 160, 300 - 185, 369, 320);
	LeaderBoardBackground.CreateTexture("Image/glass.png", ren);
	LeaderBoardBackground.SetBlendMode(SDL_BLENDMODE_BLEND);
	LeaderBoardBackground.SetAlpha(180);
	leftArrow.setSrc(0, 0, 266, 280);
	leftArrow.setDest(255, 295, 50, 50);
	leftArrow.CreateTexture("Image/Leftarrow.png", ren);
	rightArrow.setSrc(0, 0, 266, 280);
	rightArrow.setDest(490, 295, 50, 50);
	rightArrow.CreateTexture("Image/Rightarrow.png", ren);
}

int LeaderBoard::EventHandling(SDL_Event& e)
{
	SDL_PollEvent(&e);
	if (e.type == SDL_QUIT)
	{
		return -1;
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.motion.x > 285 && e.motion.x < 510 && e.motion.y > 470 && e.motion.y < 535)
	{
		isClicked = true;
	}
	return 0;
}

void LeaderBoard::Render(SDL_Renderer* ren)
{
	LeaderBoardBackground.LeaderboardRender(ren);
	leftArrow.LeaderboardRender(ren);
	rightArrow.LeaderboardRender(ren);
}

bool LeaderBoard::getClicked()
{
	return isClicked;
}

LeaderBoard::~LeaderBoard()
{
	isClicked = false;
}