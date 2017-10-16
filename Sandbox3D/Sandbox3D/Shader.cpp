#include "Shader.h"

#include "ErrorReporter.h"
#include "StringHelper.h"

Shader::Shader(Type type, const std::string& sourceCode)
	: m_type(type)
{
    static constexpr int SHADERS_TABLE[] { GL_VERTEX_SHADER, GL_FRAGMENT_SHADER };

    m_id = glCreateShader(SHADERS_TABLE[type]);
    glShaderSource(m_id, 1, StringHelper(sourceCode), nullptr);
    glCompileShader(m_id);

    int success;
    char infoLog[512];
    glGetShaderiv(m_id, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(m_id, 512, NULL, infoLog);
        ReportError(infoLog);
    }
}

Shader::~Shader()
{
    glDeleteShader(m_id);
}

GLuint Shader::GetId() const
{
    return m_id;
}

