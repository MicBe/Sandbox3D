#include <SDL.h>
#undef main

#include <GL/glew.h>

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	GLenum glewError = glewInit();

	SDL_Window* window = nullptr;

	SDL_Surface* surface = nullptr;

	SDL_Init(SDL_INIT_VIDEO);
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		cout << SDL_GetError();

	return 0;
}
