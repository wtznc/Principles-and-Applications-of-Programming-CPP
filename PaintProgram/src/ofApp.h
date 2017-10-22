#pragma once

#include "ofMain.h"
#include "ofxGui.h"
class ofApp : public ofBaseApp{

	public:
    
        //GUI part
        ofxIntSlider brushSize;
         ofxToggle toggle;
         ofxButton button;
        ofxPanel gui;
    
        void paint(int posX, int posY);
        void togglePainting();
        bool isPainting = false;
    
		void setup();
		void update();
		void draw();
    
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
