#pragma once

#include "GameLoop.h"

#include "IFrameRenderer.h"
#include "Window.h"

#include <memory>

class IFrameRenderer;

class SimpleGameLoop : public GameLoop
{
public:
	SimpleGameLoop();

protected:
	virtual void ProcessFrame() override;

private:
	Window m_window;
	std::unique_ptr<IFrameRenderer> m_frameRenderer;
};

