#pragma once

class Shader
{
public:
	enum class Type
	{
		VertexShader,
		FragmentShader
	};

public:
	Shader(Type type);

private:
	Type m_type;
};

