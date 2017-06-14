#pragma once

#include "IEventHandler.h"

class BasicEventHandler : public IEventHandler
{
public:
	BasicEventHandler(bool& quit);
	virtual void Handle(SDL_Event event) const override;

private:
	bool& m_quit;
};

