#include "pch.h"
#include "Engine.h"


Engine::Engine() {
	//Get Screen Resolution
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y),
		"Simple Game Engine", Style::Fullscreen);

	//Load Background
	m_BackgroundTexture.loadFromFile("background.jpg");
	m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::start() {
	//Timing
	Clock clock;
	
	while (m_Window.isOpen()) {
		//Restart clock and save elapsed time
		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}


