#pragma once

#include <GL/glew.h>

class Program
{
public:
    template <typename T>
    Program(T begin, T end)
    {
        m_id = glCreateProgram();

        for (auto itt = begin; itt != end; ++itt)
            glAttachShader(m_id, *itt);
        
        glLinkProgram(m_id);

        int success;
        char infoLog[512];
        glGetProgramiv(m_id, GL_LINK_STATUS, &success);
        if (!success)
        {
            glGetShaderInfoLog(m_id, 512, nullptr, infoLog);
            ReportError(infoLog);
        }
    }
    GLuint GetId() const;

    void Use() const;

private:
    GLuint m_id;
};

