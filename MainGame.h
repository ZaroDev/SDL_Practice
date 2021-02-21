#pragma once
#include <SDL.h>
#include "Sprite.h"
#include "GLSProgram.h"

enum class GameState{PLAY, EXIT};

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();


private:
	void initSystems();
	void initShaders();
	void gameLoop();
	void processInput();
	void drawGame();

	SDL_Window* _window;
	GameState _gameState;
	Sprite _sprite;

	int _screenWidth;
	int _screenHeight;

	GLSProgram _colorProgram;


	float _time;
};

