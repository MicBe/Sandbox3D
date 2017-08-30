#include "BasicShapes.h"

#include <GL/glew.h>


BasicShapes::BasicShapes(std::unique_ptr<IFrameRendererFlusher> frameFlusher)
	:IFrameRenderer(std::move(frameFlusher))
{
}

void BasicShapes::RenderFrameImpl()
{
	/*float vertices[] = {
		-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f,
		0.0f,  0.5f, 0.0f
	};*/

	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}
