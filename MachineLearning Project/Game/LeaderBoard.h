#pragma once
#include<SDL.h>
#include<SDL_image.h>
#include"Background.h"

class LeaderBoard
{
private:
	bool isClicked;
	Background LeaderBoardBackground;
	Background leftArrow;
	Background rightArrow;
public:
	LeaderBoard();
	~LeaderBoard();
	void Initialize(SDL_Renderer* ren);
	int EventHandling(SDL_Event& e);
	void Render(SDL_Renderer* ren);
	bool getClicked();
};

