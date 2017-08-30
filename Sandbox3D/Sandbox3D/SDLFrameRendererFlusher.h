#pragma once

#include "IFrameRendererFlusher.h"

#include <SDL.h>

class SDLFrameRendererFlusher : public IFrameRendererFlusher
{
public:
	SDLFrameRendererFlusher(SDL_Window* window);
	virtual void FlushFrame() override;

private:
	SDL_Window* m_window;
};

