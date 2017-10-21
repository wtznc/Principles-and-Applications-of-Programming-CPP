#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
        //unsigned char pixels[100 * 100]; //create a 100 x 100 pattern
        ofTexture tex; //create an ofTexture to send the pixels to the graphics card
        int phaseoff = 0; //variable used to shift the phase
        unsigned char pixels[100 * 100 * 4];
        unsigned char pixels2[100 * 100 * 4];
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
