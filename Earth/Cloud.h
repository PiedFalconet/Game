#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "Background.h"

using namespace std;
const float cloudmove = 20.0f;

class cloud
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
	int c1max;
	int c2max;
	int c3max;
public:
	cloud(int d = 0, int a = 0, int b = 0, int c = 0) :c1max(a), c2max(b), c3max(c)
	{
		if (d == 0)
			sprite.setPosition(0.f, 0.f);
		else
			sprite.setPosition(850.f, 0.f);
	};
	void Move();
	void Move1();
	void show(int a);
	bool shoot(string a, sf::Vector2f b);
	void change1();
	void change2();
};

void cloud::show(int a)
{
	switch (a)
	{
	case 1:
	{
		texture.loadFromFile("photo\\c1.png");
		if (!texture.loadFromFile("photo\\c1.png"))
			cout << "can't open" << endl;
		sprite.setTexture(texture);
		sprite.setScale(0.35f, 0.35f);
		window.draw(sprite);
	}break;
	case 2:
	{
		texture.loadFromFile("photo\\c2.png");
		if (!texture.loadFromFile("photo\\c2.png"))
			cout << "can't open" << endl;
		sprite.setTexture(texture);
		sprite.setScale(0.45f, 0.45f);
		window.draw(sprite);
	}break;
	case 3:
	{
		texture.loadFromFile("photo\\c3.png");
		if (!texture.loadFromFile("photo\\c3.png"))
			cout << "can't open" << endl;
		sprite.setTexture(texture);
		sprite.setScale(0.6f, 0.6f);
		window.draw(sprite);
	}break;
	}
}

void cloud:: Move()
{
	sprite.move(20.f, cloudmove);
	cout << "my cloud"<<endl<<sprite.getPosition().x << endl << sprite.getPosition().y << endl;
	window.draw(sprite);
}

void cloud::Move1()
{
	sprite.move(-20.f, cloudmove);
	window.draw(sprite);
}

bool cloud::shoot(string a,sf::Vector2f b)
{
	if (a == "1"&&b.x<(sprite.getPosition().x + 100.f) && b.x>(sprite.getPosition().x)
		&& b.y<(sprite.getPosition().y + 80.f) && b.y>(sprite.getPosition().y))
	{
		c1max++; cout << "shoot" << endl;
	}
	else if (a == "2"&&b.x<(sprite.getPosition().x +200.f) && b.x>(sprite.getPosition().x )
		&& b.y<(sprite.getPosition().y + 80.f) && b.y>(sprite.getPosition().y ))
		c2max++;
	else if (a == "3"&&b.x<(sprite.getPosition().x + 400.f) && b.x>(sprite.getPosition().x )
		&& b.y<(sprite.getPosition().y + 100.f) && b.y>(sprite.getPosition().y ))
		c3max++;
	if (c1max == 1 || c2max == 2 || c3max == 3)
		return true;
	else return false;

}

void cloud::change1()
{
	sprite.setPosition(500.f, 0.f);
	c1max = 0;
	c2max = 0;
	c3max = 0;
	window.draw(sprite);
}

void cloud::change2()
{
	sprite.setPosition(300.f, 0.f);
	c1max = 0;
	c2max = 0;
	c3max = 0;
	window.draw(sprite);
}