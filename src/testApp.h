#pragma once

#define USE_WEB_SOCKETS

#include "ofMain.h"

#ifdef USE_WEB_SOCKETS
#include "UIWebSocketHandler.h"
#include "WebSocketServer.h"
#endif

class testApp
: public ofSimpleApp
{
public:
#ifdef USE_WEB_SOCKETS
	WebSocketServer<UIWebSocketHandler> gui;
#endif
	
	void setup();
	void update();
	void draw();
	
	void keyPressed(int key);
	void keyReleased(int key);

	void mouseMoved(int x, int y );
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseDragged(int x, int y, int button);

	void windowResized(int w, int h);
};
