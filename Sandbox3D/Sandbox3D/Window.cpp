#include "Window.h"

#include "ErrorReporter.h"
#include "GLContext.h"

#include <GL/glew.h>

Window::Window(std::string title, int initialWidth, int initialHeight)
	: m_title(title),
	m_initialWidth(initialWidth), 
	m_initialHeight(initialHeight)
{
	m_window = Create(m_title, m_initialWidth, m_initialHeight);
}

SDL_Window* Window::Get() const
{
	return m_window.get();
}

std::unique_ptr<SDL_Window, SdlDeleter> Window::Create(std::string title, int width, int height)
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		ReportGLError("SDL_Init");

	auto window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
	if (!window)
		ReportGLError("SDL_CreateWindow");

	GLContext(3, 3).CreateAndAttach(window);

	glewExperimental = GL_TRUE;
	auto glewInitRes = glewInit();
	if (glewInitRes != GLEW_OK)
		ReportError("Glew failed to initialize.");

	glViewport(0, 0, width, height);

	return std::unique_ptr<SDL_Window, SdlDeleter>(window, SdlDeleter());
}

