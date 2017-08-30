#include "SimpleGameLoop.h"

#include "BasicEventHandler.h"
#include "BasicShapes.h"

#include "SDLFrameRendererFlusher.h"

SimpleGameLoop::SimpleGameLoop()
	: GameLoop(std::make_unique<BasicEventHandler>(m_quit)),
	m_window("Window", 800, 600)
{
	auto frameFlusher = std::make_unique<SDLFrameRendererFlusher>(m_window.Get());
	
	m_frameRenderer = std::make_unique<BasicShapes>(std::move(frameFlusher));
	m_frameRenderer->Init();
}

void SimpleGameLoop::ProcessFrame()
{
	m_frameRenderer->RenderFrame();
}

