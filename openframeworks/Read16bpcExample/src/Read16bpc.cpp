#include "Read16bpc.h"

Read16bpc::Read16bpc(string url, bool normalize) {
	minVal = 0;
	maxVal = 0;

	bImg.load(url);
	bPixels = bImg.getPixels();

	img.allocate(bImg.getWidth(), bImg.getHeight(), OF_IMAGE_COLOR);
	pixels = img.getPixels();

	if (normalize) {
		bImageNormToOfImage();
	}
	else {
		bImageToOfImage();
	}
}

void Read16bpc::bImageNormToOfImage() {
	for (int i = 0; i < bPixels.size(); i++) {
		int val = (int) bPixels[i];
		if (val < minVal) {
			minVal = val;
		}
		else if (val > maxVal) {
			maxVal = val;
		}
	}

	cout << "min: " << minVal << ", max: " << maxVal;
	minValF = (float) minVal;
	maxValF = (float) maxVal;

	for (int i = 0; i < pixels.size(); i++) {
		float valF = (float) bPixels[i];

		pixels.setColor(i, ofColor(ofMap(valF, minValF, maxValF, 0, 255)));
	}
	img.setFromPixels(pixels);
}

void Read16bpc::bImageToOfImage() {
	//img = createImage(bImg.getWidth(), bImg.getHeight(), RGB);
	//bImg.getRGB(0, 0, img.width, img.height, img.pixels, 0, img.width);
	//img.updatePixels();
}