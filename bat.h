#include "pch.h"
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bat {
private:
	Vector2f position;

	//create a rectangular object to be used as the player's bat
	RectangleShape batShape;
	//the speed at which the bat moves
	double batSpeed = 0.3f;

public: 
	Bat(double startingXPos, double startingYPos);

	FloatRect getPosition();
	RectangleShape getShape();

	void moveLeft();
	void moveRight();
	void update();

};
