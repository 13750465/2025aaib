// week15-3_zongzi_PImage_image_falling_part1
PImage zongzi;
void setup(){
  size(600, 400);
  zongzi = loadImage("zongzi.png");
  imageMode(CENTER);
}
float x, y;
void draw(){
  background(#C0ffee);
  image(zongzi, x, y, 120, 100);
  y++;
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
