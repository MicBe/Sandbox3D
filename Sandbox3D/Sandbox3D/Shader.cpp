#include "Shader.h"

#include "ErrorReporter.h"

#include <GL/glew.h>

Shader::Shader(Type type)
	:m_type(type)
{
	unsigned int shaderId;
	if (type == Type::VertexShader)
	{
		shaderId = glCreateShader(GL_VERTEX_SHADER);
		//glShaderSource(shaderId, 1, &vertexShaderSource, nullptr);
		glCompileShader(shaderId);

		int  success;
		char infoLog[512];
		glGetShaderiv(shaderId, GL_COMPILE_STATUS, &success);

		if (!success)
		{
			glGetShaderInfoLog(shaderId, 512, NULL, infoLog);
			ReportError(infoLog);
		}
	}
		


}

