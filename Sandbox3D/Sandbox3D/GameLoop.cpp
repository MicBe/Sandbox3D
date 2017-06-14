#include "GameLoop.h"

#include <SDL.h>

GameLoop::GameLoop(std::unique_ptr<IEventHandler> eventHandler)
	: m_quit(false),
	m_eventHandler(std::move(eventHandler))
{
}

void GameLoop::Run()
{
	SDL_Event event;

	while (!m_quit)
	{
		while (SDL_PollEvent(&event) != 0)
			m_eventHandler->Handle(event);

		Render();
	}
}


