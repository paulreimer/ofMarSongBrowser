#include "testApp.h"

//--------------------------------------------------------------
void
testApp::setup()
{
	// initialize stuff according to current window size
	windowResized(ofGetWidth(), ofGetHeight());	
	
	ofBackground(0, 0, 0);
	ofSetBackgroundAuto(true);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);

#ifdef USE_WEB_SOCKETS
	gui.setup();
#endif
}


//--------------------------------------------------------------
void
testApp::update()
{}

//--------------------------------------------------------------
void
testApp::draw()
{}

//--------------------------------------------------------------
void
testApp::windowResized(int w, int h)
{}

//--------------------------------------------------------------
void
testApp::keyPressed(int key)
{
    switch(key) {
#ifdef USE_GUI
		case ' ':
			gui.toggleDraw();
			glClear(GL_COLOR_BUFFER_BIT);
			break;
#endif			
	}
}

//--------------------------------------------------------------
void
testApp::keyReleased(int key)
{}
	
//--------------------------------------------------------------
void
testApp::mouseMoved(int x, int y)
{}

//--------------------------------------------------------------
void
testApp::mousePressed(int x, int y, int button)
{}

//--------------------------------------------------------------
void
testApp::mouseReleased(int x, int y, int button)
{}

//--------------------------------------------------------------
void
testApp::mouseDragged(int x, int y, int button)
{}
