#pragma once

#include <SDL.h>

class GLContext
{
public:
	GLContext(int majorVersion, int minorVersion);
	
	SDL_GLContext CreateAndAttach(SDL_Window* window);

private:
	int m_majorVersion;
	int m_minorVersion;
};

