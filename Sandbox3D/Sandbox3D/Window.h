#pragma once

#include "SdlDeleter.h"

#include <SDL.h>

#include <memory>
#include <string>

class Window
{
public:
	Window(std::string title, int initialWidth, int initialHeight);
	SDL_Window* Get() const;

private:
	std::unique_ptr<SDL_Window, SdlDeleter> Create(std::string title, int initialWidth, int initialHeight);

private:
	std::string m_title;
	int m_initialWidth;
	int m_initialHeight;

	std::unique_ptr<SDL_Window, SdlDeleter> m_window;
};

