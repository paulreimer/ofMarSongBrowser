#include "UIWebSocketHandler.h"

#include <iostream>

//--------------------------------------------------------------
UIWebSocketHandler::UIWebSocketHandler(StreamSocket& socket, SocketReactor& reactor)
: WebSocketHandler(socket, reactor)
, bDataToSend(true)
{}

//--------------------------------------------------------------
void UIWebSocketHandler::ready()
{
	if (!bDataToSend)
		return;

	std::string data;

	if (resource == "/")
		std::cout << "Request for / [DENIED]" << std::endl;

	else if (resource == "/songs.json")
	{
	}
	else if (resource == "/distances.json")
	{
	}
	else {
		std::cout << "Request for " << resource << " [DENIED]" << std::endl;
		return;
	}
	
	//	cout<< "Sending " << frame.data.size() << " bytes" << endl;
	send(data);
	bDataToSend = false;
}

//--------------------------------------------------------------
void
UIWebSocketHandler::idle()
{
	std::cout << "Idle'd" << std::endl;
//	ofSleepMillis(1000);
}

//--------------------------------------------------------------
void
UIWebSocketHandler::onmessage(const std::string& frame)
{
	std::cout<< "Recv'd " << frame.size() << " bytes: " << " from " << service << std::endl;
}

//--------------------------------------------------------------
void
UIWebSocketHandler::onopen()
{}

//--------------------------------------------------------------
void
UIWebSocketHandler::onclose()
{}
