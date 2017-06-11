#pragma 

#include <SDL.h>

class SdlDeleter
{
public:
	void operator()(SDL_Window* window) const;
};

