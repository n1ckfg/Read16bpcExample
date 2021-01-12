#include "ofApp.h"

void ofApp::setup() {
	img = Read16bpc("test.png", true);
}

void ofApp::update() {
	//
}

void ofApp::draw() {
	img.img.draw(0, 0);
}

