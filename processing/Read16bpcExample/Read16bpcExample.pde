Read16bpc img;

void setup() {
  size(640, 480, P2D);
  
  img = new Read16bpc("test.png", true);
}

void draw() {
  image(img.img, 0, 0);
}
