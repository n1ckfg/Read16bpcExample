// https://forum.openframeworks.cc/t/loading-displaying-and-saving-a-ofshortimage/10639/5

#pragma once

#include "ofMain.h"

class Read16bpc {

	public:
		Read16bpc(string url, bool normalize);
		virtual ~Read16bpc() {};

		ofShortImage bImg;
		ofShortPixelsRef bPixels;

		ofImage img;
		ofPixelsRef pixels;

		int minVal;
		int maxVal;
		float minValF;
		float maxValF;

		void bImageNormToOfImage();
		void bImageToOfImage();

};