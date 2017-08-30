#pragma once

#include "IFrameRenderer.h"

class BasicShapes : public IFrameRenderer
{
public:
	BasicShapes(std::unique_ptr<IFrameRendererFlusher> frameFlusher);

private:
	virtual void RenderFrameImpl() override;
};

