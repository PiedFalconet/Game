#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include"Background.h"

using namespace std;
const float planemove = 40.0f;

class plane 
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	plane(int a) 
	{
		if (a == 1)
		{
			texture.loadFromFile("photo\\p1.png");
			if (!texture.loadFromFile("photo\\p1.png"))
				cout << "Can't Open the picture!!!" << endl;
		}
		else if (a==2)
		{
			texture.loadFromFile("photo\\p2.png");
			if (!texture.loadFromFile("photo\\p2.png"))
				cout << "Can't Open the picture!!!" << endl;
		}
		else if (a == 3)
		{
			texture.loadFromFile("photo\\p3.png");
			if (!texture.loadFromFile("photo\\p3.png"))
				cout << "Can't Open the picture!!!" << endl;
		}
		else if (a == 4)
		{
			texture.loadFromFile("photo\\p4.png");
			if (!texture.loadFromFile("photo\\p4.png"))
				cout << "Can't Open the picture!!!" << endl;
		}
		else if (a == 5)
		{
			texture.loadFromFile("photo\\p5.png");
			if (!texture.loadFromFile("photo\\p5.png"))
				cout << "Can't Open the picture!!!" << endl;
		}
		
		sprite.setTexture(texture);
		sprite.setPosition(475.f, 550.f);
		sprite.setScale(0.3f, 0.3f);
	};
	
	sf::Vector2f getposition();
	void update(int,int);
	
};


sf::Vector2f plane::getposition()
{
	return sprite.getPosition();
}


void plane::update(int a=0,int s=0)
{	
	if (a == -1) sprite.move(0,s*planemove);
	else if(a==1) sprite.move(s*planemove,0);
	cout << sprite.getPosition().x << endl << sprite.getPosition().y << endl;
	window.draw(sprite);
}