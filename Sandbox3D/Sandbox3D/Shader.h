#pragma once

#include <GL/glew.h>
#include <string>

class Shader
{
public:
	enum Type
	{
		VertexShader = 0,
		FragmentShader
	};

public:
	Shader(Type type, const std::string& sourceCode);
    ~Shader();

    GLuint GetId() const;

private:
	Type m_type;
    GLuint m_id;
};

