#include "ofApp.h"
#include <stdlib.h>
using namespace std;
//--------------------------------------------------------------
void ofApp::setup(){
    test = 0;
    age = 0;
    health = 60;
    food = 20;
    illness = 0;
    poo = 0;
    hangover = 0;
    drunk = false;
    holiday = false;
    name = ofSystemTextBoxDialog("Input a name for your character!", name);
    ofSetBackgroundColor(255, 229, 204);
    
    sleepButton.set(10, 340, 175, 50);
    bSleepButton = false;
    pressedSleep = false;
    
    eatButton.set(210, 340, 180, 50);
    bEatButton = false;
    pressedEat = false;
    mood = Mood::Happy;
    radius = 50;
    num = 0;
    



}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(bSleepButton) {
        if(pressedSleep == false) {
            pressedSleep = true;
            num = rand() % 255 + 1;
            cout << "Clicked 'sleep' button" << endl;
            health += 20;
        }
    } else {
        pressedSleep = false;
    }
    
    if(bEatButton) {
        if(pressedEat == false) {
            pressedEat = true;
            radius += 10;
            cout << "Clicked 'eat' button" << endl;
        }
    } else {
        pressedEat = false;
    }
    
    
    test = rand() % 250 + 1;
    test2 = rand() % 250 + 1;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(test, test2, 50);
    ofDrawBitmapString("Hello " + name + "! How are you doing today?", 10, 40);
    if(mood == Mood::Happy) {
        ofSetColor(num, num+20, num+60);
        ofDrawCircle(200, 150, radius);
    }
    
    
    if(bSleepButton){
        ofSetColor(ofColor::sandyBrown);
    } else{
        ofSetColor(ofColor::seaGreen);
    }
    
    if(bSleepButton){
        ofSetColor(ofColor::sandyBrown);
    } else{
        ofSetColor(ofColor::seaGreen);
    }
    ofRect(sleepButton);
    
    ofSetColor(0, 0, 0);
    ofDrawBitmapString("Sleep", 30, 355);
    if(bEatButton){
        ofSetColor(ofColor::sandyBrown);
    } else{
        ofSetColor(ofColor::seaGreen);
    }
    
    if(bEatButton){
        ofSetColor(ofColor::sandyBrown);
    } else{
        ofSetColor(ofColor::seaGreen);
    }
    ofRect(eatButton);
    ofSetColor(0, 0, 0);
    ofDrawBitmapString("Eat", 230, 355);

    ofSetColor(250, 0, 0);
    
    ofDrawBitmapString("Health", 10, 320);
    ofDrawLine(10, 330, health, 330);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'e') {
        radius += 10;
    }
    
    if(key == 's') {
        num = rand() % 255 + 1;
        health += 20;
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

    if(sleepButton.inside(x, y)) {
        bSleepButton = !bSleepButton;
    }
    
    if(eatButton.inside(x, y)) {
        bEatButton = !bEatButton;
    }
    
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    if(sleepButton.inside(x, y)) {
        bSleepButton = !bSleepButton;
    }
    
    if(eatButton.inside(x, y)) {
        bEatButton = !bEatButton;
    }
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
