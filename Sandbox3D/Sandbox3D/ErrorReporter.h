#pragma once

#include <SDL.h>

#include <exception>
#include <string>

static void ReportGLError(const std::string& functionName)
{
	std::string error = std::string("Error in ");
	error += functionName;
	error += ": ";
	error += SDL_GetError();
	throw std::exception(error.c_str());
}

static void ReportError(const std::string& errorMessage)
{
	std::string error = "Error: ";
	error += errorMessage;
	throw std::exception(error.c_str());
}
