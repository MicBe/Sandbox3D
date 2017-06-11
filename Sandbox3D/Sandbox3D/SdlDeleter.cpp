#include "SdlDeleter.h"

void SdlDeleter::operator()(SDL_Window* window) const
{
	SDL_DestroyWindow(window);
}
