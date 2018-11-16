#include "pch.h"
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball {

private:
	Vector2f position;

	RectangleShape ballShape;

	double xVelocity = 0.2f;
	double yVelocity = 0.2f;

public:
	Ball(double startingXPos, double startingYPos);

	FloatRect getPosition();
	RectangleShape getShape();

	double getXVelocity();
	
	void reboundSides();
	void reboundBatOrTop();
	void hitBottom();
	void update();

};
