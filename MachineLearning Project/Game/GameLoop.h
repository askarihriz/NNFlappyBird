#pragma once
#include<SDL.h>
#include<SDL_image.h>
#include<iostream>
#include<cstdlib>
#include"Player.h"
#include"Background.h"
#include"CollisionManager.h"
#include"TextManager.h"
#include"NeuralNetwork.h"
#include"MainMenu.h"
#include"LeaderBoard.h"
#include"DoublyLinkedList.h"

class GameLoop
{
private:
	Player p;
	Background b;
	Background ground1,ground2;
	Background Pipe_Above1;
	Background Pipe_Below1;
	Background Pipe_Above2;
	Background Pipe_Below2;
	Background Pipe_Above3;
	Background Pipe_Below3;
	Background leaderboard;
	TextManager score;
	TextManager gen;
	TextManager recentScore;
	TextManager rcs;
	NeuralNetwork neuralNetwork;
	MainMenu menu;
	LeaderBoard lb;
	DoublyLinkedList list;
	const int HEIGHT = 600;
	const int WIDTH = 800;
	int points = 0;
	int generations = 0;
	int nextCheckPoint = 0;
	int variance1 = rand() % 201 - 100;
	int variance2 = rand() % 201 - 100;
	int variance3 = rand() % 201 - 100;
	bool GameState;
	bool leaderBoardState;
	SDL_Window* window;
	SDL_Event event1;
	SDL_Renderer* renderer;
public:
	GameLoop();
	void MainMenu();
	bool getGameState();
	void Update();
	void Reset();
	void CollisionDetection();
	void Intialize();
	void Event();
	void Render();
	void Clear();
};