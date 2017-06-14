#pragma once

#include <SDL.h>

class IEventHandler
{
public:
	virtual ~IEventHandler() = default;

	virtual void Handle(SDL_Event event) const = 0;
};

