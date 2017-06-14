#pragma once

#include "GameLoop.h"

#include "Window.h"

class BasicGameLoop : public GameLoop
{
public:
	BasicGameLoop();

protected:
	virtual void Render() override;

private:
	Window m_window;
};

