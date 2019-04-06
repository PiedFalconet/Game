#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include "Background.h"
#include "Aircraft.h"

using namespace std;
const float Bulletmove = 50.0f;


class bullet
{
private:
	sf::RectangleShape shape;
	sf::Vector2f position;
public:
	bullet(sf::Vector2f a) : position(a)
	{
		shape.setSize(sf::Vector2f(12.0f, 24.0f));
		shape.setFillColor(sf::Color::Black);
		position.x += 24.f;
		position.y -= 30.f;
		shape.setPosition(position);
	}
	void show();
	sf::Vector2f getposition();
	void Move(sf::Time a , float x);
};

void bullet::show()
{
	shape.setPosition(position);
	window.draw(shape);
}

sf::Vector2f bullet::getposition()
{
	return shape.getPosition();
}

void bullet::Move(sf::Time a ,float x)
{
	position.x = x+24;
	if (position.y > 0)
	{
		position.y -= Bulletmove;
		show();
	}
	else position.y = 550;
}