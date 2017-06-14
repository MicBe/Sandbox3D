#include "BasicGameLoop.h"

#include "BasicEventHandler.h"

#include <GL/glew.h>

BasicGameLoop::BasicGameLoop()
	: GameLoop(std::make_unique<BasicEventHandler>(m_quit)),
	m_window("Window", 800, 600)
{
}

void BasicGameLoop::Render()
{
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	SDL_GL_SwapWindow(m_window.Get());
}
