#undef main

#include "BasicGameLoop.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	try
	{
		BasicGameLoop loop;
		
		loop.Run();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
