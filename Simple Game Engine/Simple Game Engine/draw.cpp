#include "pch.h"
#include "Engine.h"

void Engine::draw() {

	//Clear last frame
	m_Window.clear(Color::White);

	//Draw BG and Char
	m_Window.draw(m_BackgroundSprite);
	m_Window.draw(m_Bob.getSprite());

	//Display
	m_Window.display();
}