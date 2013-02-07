#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    player.loadMovie("drug_tunnels.mov");
    player.play();
    player.setLoopState(OF_LOOP_NORMAL);
    
    //sound.loadSound("10DLZ.m4a");
    //sound2.loadSound("clique.mp4");
        
    frameByframe = false;
    
    ofSetFrameRate(100); 
    
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    //ofSoundUpdate();
    
    player.getCurrentFrame(); 
    player.update();

}

//--------------------------------------------------------------
void testApp::draw(){
    //sound.play();
    //sound2.play();
        
       player.draw(0,0, ofGetWidth(), ofGetHeight());
    //Introduce a purple frame whenever there is a new frame. 
    if (player.isFrameNew()) {
        ofColor sample = (99,34,210);
        ofBackground(sample); 
    }

ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key==' '){
        if (player.isPlaying()){
            player.stop();
        }
    }

    void keyPressed  (int key);{
        switch(key){
            case 'f':
                frameByframe=!frameByframe;
                player.setPaused(frameByframe);
                break;
            case OF_KEY_LEFT:
                player.previousFrame();
                break;
            case OF_KEY_RIGHT:
                player.nextFrame();
                break;
            case '0':
                player.firstFrame();
                break;
        }
    }

    
    
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}