#include "GLContext.h"

#include "ErrorReporter.h"

GLContext::GLContext(int majorVersion, int minorVersion)
	: m_majorVersion(majorVersion),
	m_minorVersion(minorVersion)
{
}

SDL_GLContext GLContext::CreateAndAttach(SDL_Window* window)
{
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, m_majorVersion);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, m_minorVersion);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

	auto context = SDL_GL_CreateContext(window);

	if (!context)
		ReportGLError("SDL_GL_CreateContext");

	return context;
}
