#pragma once

#include "ofMain.h"
#include <string>
enum Gender {
    Male, Female
};

enum Mood {
    Angry, Annoyed, Calm, Cheerful, Depressed, Dreamy, Ecstatic, Energetic, Good, Happy, Frustrated, Mellow, Optimistic, Peaceful, Silly, Sympathetic, Weird, Stressed, Sad, Restless, Pessimistic, Mad, Irritated
};

class ofApp : public ofBaseApp{
    
    public:
        int test;
        int test2;
        bool        pressedSleep;
        bool        pressedEat;
        int         num;
        int         age;
        bool        drunk;
        int         food;
        int         hangover;
        int         health;
        bool        holiday;
        int         illness;
        Mood        mood;
        string      name;
        int         poo;
        int         radius;
    
        ofRectangle sleepButton;
        bool        bSleepButton;
    
        ofRectangle eatButton;
        bool        bEatButton;
    
        void        setup();
        void        update();
        void        draw();
    
        void        keyPressed(int key);
        void        keyReleased(int key);
        void        mouseMoved(int x, int y );
        void        mouseDragged(int x, int y, int button);
        void        mousePressed(int x, int y, int button);
        void        mouseReleased(int x, int y, int button);
        void        mouseEntered(int x, int y);
        void        mouseExited(int x, int y);
        void        windowResized(int w, int h);
        void        dragEvent(ofDragInfo dragInfo);
        void        gotMessage(ofMessage msg);
    
};

