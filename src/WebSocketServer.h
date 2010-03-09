#pragma once

#include "ThreadedWebSocketServer.h"

template <class HandlerT>
class WebSocketServer
: public ThreadedWebSocketServer<HandlerT>
{
public:
	void setup()
	{
		ThreadedWebSocketServer<HandlerT>::run();
	}
	void destroy()
	{
		ThreadedWebSocketServer<HandlerT>::stop();
	}
};
