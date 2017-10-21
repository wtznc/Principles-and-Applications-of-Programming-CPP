#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    int size = sizeof(pixels) / sizeof(char);
    float phase = 0.0;
    float phaseD = TWO_PI / 100.0;
    for(int i = 0; i < size; i+=4){
        pixels[i] = sinf(phase) * 255.0;
        pixels[i+1] = sinf(phase * 2) * 255.0;
        pixels[i+2] = sinf(phase * 1.5) * 255.0;
        pixels[i+3] = 255;
        phase += phaseD;
    }
    int i2, r;
    for (int i=0;i<size;i++){
        // work out where to move the pixel to, based on the red
        r = pixels[i];
        // i2 is the index we will copy to in the new array...
        // so it is saying how many pixels along we are moving this pixel
        i2 = i + (r * i/10); // redder pixels move more!
        i2 = i2 % size; // make sure it doesn't go out of the bounds of the array
        pixels2[i2] = pixels[i];
        pixels2[(i2+1)%size] = pixels[i+1];
        pixels2[(i2+2)%size] = pixels[i+2];
        pixels2[(i2+3)%size] = 255;
        
    }
    // note that we are loading pixels2 now...
    tex.loadData(pixels2, 100, 100, GL_RGBA);
}

//--------------------------------------------------------------
void ofApp::update(){
    int size = sizeof(pixels) * sizeof(char);
    int i2, r;
    for (int i=0;i<size;i+=4){
        // work out where to move the pixel to, based on the red
        r = pixels[i];
        // i2 is the index we will copy to in the new array...
        // so it is saying how many pixels along we are moving this pixel
        i2 = i + (r * phaseoff / (mouseX+1)); // redder pixels move more!
        i2 = i2 % size; // make sure it doesn't go out of the bounds of the array
        pixels2[i2] = pixels[i];
        pixels2[(i2+1)%size] = pixels[i+1];
        pixels2[(i2+2)%size] = pixels[i+2];
        pixels2[(i2+3)%size] = 255;
    }
    // we are loading pixels2 now...
    tex.loadData(pixels2, 100, 100, GL_RGBA);
    phaseoff ++; /// note - you will need to define push somewhere!
}

//--------------------------------------------------------------
void ofApp::draw(){
    tex.draw(0, 0, ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
