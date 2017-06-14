#include "BasicEventHandler.h"

#include "IEventHandler.h"
#include <GL/glew.h>


BasicEventHandler::BasicEventHandler(bool& quit)
	:m_quit(quit)
{
}

void BasicEventHandler::Handle(SDL_Event event) const
{
	if (event.type == SDL_WINDOWEVENT)
	{
		switch (event.window.event)
		{
		case SDL_WINDOWEVENT_RESIZED:
			glViewport(0, 0, event.window.data1, event.window.data2);
			break;
		}
	}
	else if (event.type == SDL_QUIT)
	{
		m_quit = true;
	}
}
