
#include <SDL.h>
#undef main

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	SDL_Window* window = nullptr;

	SDL_Surface* surface = nullptr;

	SDL_Init(SDL_INIT_VIDEO);
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		cout << SDL_GetError();

	return 0;
}
