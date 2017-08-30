#pragma once

#include "IEventHandler.h"

#include <memory>

class GameLoop
{
public:
	GameLoop(std::unique_ptr<IEventHandler> eventHandler);
	virtual ~GameLoop() = default;

	void Run();

	virtual void ProcessFrame() = 0;

protected:
	std::unique_ptr<IEventHandler> m_eventHandler;
	bool m_quit;
};

