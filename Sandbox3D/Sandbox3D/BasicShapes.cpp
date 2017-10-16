#include "BasicShapes.h"

#include <GL/glew.h>

BasicShapes::BasicShapes(std::unique_ptr<IFrameRendererFlusher> frameFlusher)
	:IFrameRenderer(std::move(frameFlusher))
{
	m_triangleVertices = {
		-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f,
		0.0f,  0.5f, 0.0f
	};

	glGenBuffers(1, &m_vbo);
}

void BasicShapes::RenderFrameImpl()
{
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(m_triangleVertices) * sizeof(std::vector<float>::value_type), &m_triangleVertices[0], GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), 0);
    glEnableVertexAttribArray(0);
}
