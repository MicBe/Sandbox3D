#include <GL/glew.h>

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
				if (e.type == SDL_WINDOWEVENT)
				{
					switch (e.window.event)
					{
					case SDL_WINDOWEVENT_RESIZED:
						glViewport(0, 0, e.window.data1, e.window.data2);
						break;
					}
				}
				if (e.type == SDL_QUIT)
					quit = true;
			}

			glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);

			SDL_GL_SwapWindow(window.Get());
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
