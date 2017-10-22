#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetBackgroundAuto(false);
    gui.setup();
    gui.add(brushSize.setup("brushSize", 5, 1, 300));
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    if(isPainting == true)
        paint(mouseX, mouseY);
}

void ofApp::paint(int posX, int posY){
    if(isPainting == true)
        ofSetColor(255, 0, 0);
        ofEllipse(posX, posY, brushSize, brushSize);
}

void ofApp::togglePainting(){
    isPainting = !isPainting;
    
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'p') {
        togglePainting();
    }
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
    togglePainting();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    togglePainting();
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
