#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bob
{

private:
	//Bob's Position
	Vector2f m_Position;

	//Sprite
	Sprite m_Sprite;

	//Texture
	Texture m_Texture;

	//Directionals
	bool m_LeftPressed;
	bool m_RightPressed;

	//Speed
	float m_Speed;

public:
	//Constructor
	Bob();

	Sprite getSprite();

	void moveLeft();
	void moveRight();

	void stopLeft();
	void stopRight();

	//Frame Update
	void update(float elapsedTime);
};

