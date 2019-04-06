#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Background.h"

using namespace std;


static int maxsun=3;
class sun
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	sun() 
	{
		texture.loadFromFile("photo\\sun.png");
	if (!texture.loadFromFile("photo\\sun.png"))
		cout << "Can't Open the picture!!!" << endl;
	sprite.setTexture(texture);
	sprite.setScale(0.7f, 0.7f); 
	};
	void show();
	bool shoot(sf::Vector2f);
};
void sun::show()
{
	window.draw(sprite);
}

bool sun::shoot(sf::Vector2f a)
{
	if (a.x > 100 &&a.x<160&& a.y < 160&&a.y>100)
	{
		maxsun--; 
	}
	if (maxsun == 0)
	{
		return true;
	}
	else return false;
}