#include "Window.h"
#undef main

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	try
	{
		Window window("Window", 800, 600);

		bool quit = false;

		SDL_Event e;
		while (!quit)
		{
			while (SDL_PollEvent(&e) != 0)
			{
				if (e.type == SDL_QUIT)
					quit = true;
			}
			SDL_GL_SwapWindow(window.Get());
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
