#pragma once

#include "WebSocketHandler.h"

class UIWebSocketHandler
: public WebSocketHandler
{
public:
	UIWebSocketHandler();
	UIWebSocketHandler(StreamSocket& socket, SocketReactor& reactor);

	void ready();
	void idle();
	void onmessage(const std::string& frame);
	void onopen();
	void onclose();
protected:
	bool bDataToSend;
};
