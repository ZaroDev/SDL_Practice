#pragma once
#include <glew.h>

class Sprite
{
public:
	Sprite();
	~Sprite();

	void init(float x, float y, float height, float width);
	void draw();

private:
	float _y;
	float _x;
	float _height;
	float _width;
	GLuint _vboID;

};

