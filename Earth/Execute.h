#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <cstdlib>
#include "Aircraft.h"
#include "Cloud.h"
#include "Bullet.h"
#include "Sun.h"

using namespace std;


int air = 0;

int Open1()
{
	int flag = 0;
	while (window.isOpen())
	{
		window.clear();
		back back1;
		back1.show1();
		sf::Event event1;
		sf::Texture texture;
		sf::Sprite sprite;
		texture.loadFromFile("photo\\start.png");
		if (!texture.loadFromFile("photo\\start.png"))
			cout << "Can't Open the picture!!!" << endl;
		sprite.setTexture(texture);
		sprite.setPosition(150.f, 200.f);
		window.draw(sprite);
		while (window.pollEvent(event1))
		{
			
			if (event1.type == sf::Event::MouseButtonPressed)
			{
				if (event1.mouseButton.button == sf::Mouse::Left)
				{
					if (sf::Mouse::getPosition().y > 200.f && sf::Mouse::getPosition().y < 500)
						if (sf::Mouse::getPosition().x>150.f && sf::Mouse::getPosition().x < 750)
						{
						flag = 1;//¿ªÊ¼ÓÎÏ·
						}
				}
			}
		}
		window.display();
		if (flag == 1)
		{
			return flag;
		}
	}
}

int  Open2()
{
	int choice = 0;
	while (window.isOpen())
	{
		window.clear();
		back back2;
		back2.show5();
		sf::Event event1;
		sf::Texture texture1,texture2,texture3;
		sf::Sprite sprite1,sprite2,sprite3;
		texture1.loadFromFile("photo\\1.png");
		if (!texture1.loadFromFile("photo\\1.png"))
			cout << "Can't Open the picture!!!" << endl;
		sprite1.setTexture(texture1);
		sprite1.setPosition(150.f, 200.f);
		window.draw(sprite1);
		texture2.loadFromFile("photo\\2.png");
		if (!texture2.loadFromFile("photo\\2.png"))
			cout << "Can't Open the picture!!!" << endl;
		sprite2.setTexture(texture2);
		sprite2.setPosition(450.f, 200.f);
		window.draw(sprite2);
		texture3.loadFromFile("photo\\3.png");
		if (!texture3.loadFromFile("photo\\3.png"))
			cout << "Can't Open the picture!!!" << endl;
		sprite3.setTexture(texture3);
		sprite3.setPosition(750.f, 200.f);
		window.draw(sprite3);

		while (window.pollEvent(event1))
		{
			if (event1.type == sf::Event::MouseButtonPressed)
			{
				if (event1.mouseButton.button == sf::Mouse::Left)
				{
					//if (sf::Mouse::getPosition().y > 200 && sf::Mouse::getPosition().y < 400)
					{
						if (sf::Mouse::getPosition().x > 600 && sf::Mouse::getPosition().x < 850)
						{
							choice = 1; break;
						}
						else if (sf::Mouse::getPosition().x>850 && sf::Mouse::getPosition().x < 1000)
						{
							choice = 2; break;
						}
						else if (sf::Mouse::getPosition().x>1000 && sf::Mouse::getPosition().x < 1500)
						{
							choice = 3; break;
						}
					}
				}
			}
		}
		window.display();
		if (choice!=0)
			return choice;
	}
	
}

int Open3()
{
	while (window.isOpen())
	{
		window.clear();
		back back2;
		back2.show2();
		sf::Event event1;
		sf::Texture texture1, texture2, texture3, texture4, texture5, texture6;
		sf::Sprite sprite1, sprite2, sprite3, sprite4, sprite5, sprite6;
		texture1.loadFromFile("photo\\1.png");
		if (!texture1.loadFromFile("photo\\1.png"))
			cout << "Can't Open the picture1!!!" << endl;
		sprite1.setTexture(texture1);
		sprite1.setPosition(150.f, 500.f);
		window.draw(sprite1);
		texture2.loadFromFile("photo\\2.png");
		if (!texture2.loadFromFile("photo\\2.png"))
			cout << "Can't Open the picture2!!!" << endl;
		sprite2.setTexture(texture2);
		sprite2.setPosition(300.f, 500.f);
		window.draw(sprite2);
		texture3.loadFromFile("photo\\3.png");
		if (!texture3.loadFromFile("photo\\3.png"))
			cout << "Can't Open the picture3!!!" << endl;
		sprite3.setTexture(texture3);
		sprite3.setPosition(450.f, 500.f);
		window.draw(sprite3);
		texture4.loadFromFile("photo\\4.png");
		if (!texture4.loadFromFile("photo\\4.png"))
			cout << "Can't Open the picture4!!!" << endl;
		sprite4.setTexture(texture4);
		sprite4.setPosition(600.f, 500.f);
		window.draw(sprite4);
		texture5.loadFromFile("photo\\5.png");
		if (!texture5.loadFromFile("photo\\5.png"))
			cout << "Can't Open the picture5!!!" << endl;
		sprite5.setTexture(texture5);
		sprite5.setPosition(750.f, 500.f);
		window.draw(sprite5);
		texture6.loadFromFile("photo\\help.png");
		if (!texture6.loadFromFile("photo\\help.png"))
			cout << "Can't Open the picture6!!!" << endl;
		sprite6.setTexture(texture6);
		sprite6.setPosition(100.f, 100.f);
		window.draw(sprite6);

		while (window.pollEvent(event1))
		{
			if (event1.type == sf::Event::MouseButtonPressed)
			{
				if (event1.mouseButton.button == sf::Mouse::Left)
				{
					//if (sf::Mouse::getPosition().y > 400 && sf::Mouse::getPosition().y < 700)
					{
						if (sf::Mouse::getPosition().x>520 && sf::Mouse::getPosition().x < 700)
						{
							air = 1; break;
						}
						else if (sf::Mouse::getPosition().x>700 && sf::Mouse::getPosition().x < 850)
						{
							air = 2; break;
						}
						else if (sf::Mouse::getPosition().x>850 && sf::Mouse::getPosition().x < 1000)
						{
							air = 3; break;
						}
						else if (sf::Mouse::getPosition().x>1000 && sf::Mouse::getPosition().x < 1200)
						{
							air = 4; break;
						}
						else if (sf::Mouse::getPosition().x>1200 && sf::Mouse::getPosition().x < 1500)
						{
							air = 5; break;
						}
					}
				}
			}
		}
		window.display();
		if (air != 0)
			return air;
	}

}

void execute()
{
	
	Open1();
	int a = Open2();
	sf::Clock clock1;
	plane plane1(Open3());
	sf::Event event;
	cloud cloud1;
	cloud cloud2;
	cloud cloud3(1);
	cloud cloud4(1);
	cloud cloud5;
	cloud1.show(a);
	bullet bullet1(plane1.getposition());
	while (window.isOpen())
	{
		window.clear();
		back back1;
		back1.show3();
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed)
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
					plane1.update(-1, -1);
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
					plane1.update(-1, 1);
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
					plane1.update(1, -1);
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
					plane1.update(1, 1);
			}
		}
		plane1.update();
		sf::Time elapse1 = clock1.getElapsedTime();
		bullet1.Move(elapse1, plane1.getposition().x);
		cout << elapse1.asMilliseconds() << endl;
		if (!cloud1.shoot("a", bullet1.getposition()))
		{
			
			cout << "cloud";
			cout << bullet1.getposition().x << endl << bullet1.getposition().y << endl;
			cloud1.Move();
		}
		else
		{
			cloud1.change1(); 
		}
		if (elapse1 > sf::milliseconds(10000))
		{
			cloud2.show(a);
			if (!cloud2.shoot("a", bullet1.getposition()))
			{
				cout << "cloud";
				cloud2.Move();
			}
			else
			{
				cloud2.change2();
			}
		}
		if (elapse1 > sf::milliseconds(20000))
		{
			cloud3.show(a);
			if (!cloud3.shoot("a", bullet1.getposition()))
			{
				cout << "cloud";
				cloud3.Move1();
			}
			else
			{
				cloud3.change2();
			}
		}
		if (elapse1 > sf::milliseconds(30000))
		{
			cloud4.show(a);
			if (!cloud4.shoot("a", bullet1.getposition()))
			{
				cout << "cloud";
				cloud4.Move1();
			}
			else
			{
				cloud4.change2();
			}
		}
		if (elapse1 > sf::milliseconds(40000))
		{
			cloud5.show(a);
			if (!cloud5.shoot("a", bullet1.getposition()))
			{
				cout << "cloud";
				cloud5.Move();
			}
			else
			{
				cloud5.change2();
			}
		}
		sun sun1;
		if (elapse1>sf::milliseconds(50000))
		sun1.show();
		if (sun1.shoot(bullet1.getposition()))
		{
			back1.show4(); 
		}
		window.display();
	}
	system("pause");
	window.close();
}