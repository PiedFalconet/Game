#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
sf::RenderWindow window(sf::VideoMode(1000, 700), "Out Of the Earth");
using namespace std;

class back
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	void show1();
	void show2();
	void show3();
	void show4();
	void show5();

};

void back::show1()
{
	texture.loadFromFile("photo\\b1.png");
	if (!texture.loadFromFile("photo\\b1.png"))
		cout << "Can't Open the picture!!!" << endl;
	sprite.setTexture(texture);
	sprite.setScale(2.5f, 2.65f);
	window.draw(sprite);	
}

void back::show2()
{
	texture.loadFromFile("photo\\b2.png");
	if (!texture.loadFromFile("photo\\b2.png"))
		cout << "Can't Open the picture!!!" << endl;
	sprite.setTexture(texture);
	sprite.setScale(1.25f, 1.1f);
	window.draw(sprite);
	
}

void back::show3()
{
	texture.loadFromFile("photo\\b3.png");
	if (!texture.loadFromFile("photo\\b3.png"))
		cout << "Can't Open the picture!!!" << endl;
	sprite.setTexture(texture);
	sprite.setScale(1.0f, 2.0f);
	window.draw(sprite);
}

void back::show4()
{
	texture.loadFromFile("photo\\b4.png");
	if (!texture.loadFromFile("photo\\b4.png"))
		cout << "Can't Open the picture!!!" << endl;
	sprite.setTexture(texture);
	sprite.setScale(1.0f, 1.1f);
	window.draw(sprite);
}

void back::show5()
{
	texture.loadFromFile("photo\\b5.png");
	if (!texture.loadFromFile("photo\\b5.png"))
		cout << "Can't Open the picture!!!" << endl;
	sprite.setTexture(texture);
	sprite.setScale(0.55f, 1.0f);
	window.draw(sprite);
}

