#pragma once

#include "IFrameRenderer.h"

#include <vector>

class BasicShapes : public IFrameRenderer
{
public:
	BasicShapes(std::unique_ptr<IFrameRendererFlusher> frameFlusher);

private:
	virtual void RenderFrameImpl() override;

private:
	std::vector<float> m_triangleVertices;
	unsigned int m_vbo;

};

