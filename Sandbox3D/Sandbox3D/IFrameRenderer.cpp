#include "IFrameRenderer.h"

IFrameRenderer::IFrameRenderer(std::unique_ptr<IFrameRendererFlusher> frameFlusher)
	: m_flusher(std::move(frameFlusher))
{
}

void IFrameRenderer::Init()
{
}

void IFrameRenderer::RenderFrame()
{
	RenderFrameImpl();
	m_flusher->FlushFrame();
}
