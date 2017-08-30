#pragma once

#include <memory>

#include "IFrameRendererFlusher.h"

class IFrameRenderer
{
public:
	IFrameRenderer(std::unique_ptr<IFrameRendererFlusher> frameFlusher);
	virtual ~IFrameRenderer() = default;

	virtual void Init();
	virtual void RenderFrame();

private:
	virtual void RenderFrameImpl() = 0;

private:
	std::unique_ptr<IFrameRendererFlusher> m_flusher;
};

