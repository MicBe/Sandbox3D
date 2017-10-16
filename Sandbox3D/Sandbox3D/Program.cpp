#include "Program.h"

GLuint Program::GetId() const
{
    return m_id;
}

void Program::Use() const
{
    glUseProgram(m_id);
}
