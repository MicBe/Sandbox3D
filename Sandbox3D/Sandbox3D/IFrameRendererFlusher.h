#pragma once

class IFrameRendererFlusher
{
public:
	virtual ~IFrameRendererFlusher() = default;

	virtual void FlushFrame() = 0;
};

