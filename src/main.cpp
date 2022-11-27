#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main(int argc, char **argv){
    // Initialise ROS node
    ros::init(argc, argv, "ofNode");
    
    ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    // Can pass args from node initialisation as well
    ofRunApp(new ofApp(argc, argv));

}
