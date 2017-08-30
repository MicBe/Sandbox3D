#include "SDLFrameRendererFlusher.h"

SDLFrameRendererFlusher::SDLFrameRendererFlusher(SDL_Window* window)
	:m_window(window)
{
}

void SDLFrameRendererFlusher::FlushFrame()
{
	SDL_GL_SwapWindow(m_window);
}
