#include "pch.h"
#include "Engine.h"

using namespace sf;

//New objects should have their own update. Collision detection goes here.

void Engine::update(float dtAsSeconds) {
	m_Bob.update(dtAsSeconds);
}