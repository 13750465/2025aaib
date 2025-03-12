// week04-5_float_fishX_fishY_dx_dy_dist
void setup(){
  size(600, 400);
}  
int x,y;
float fishX = 300, fishY = 200;
void draw(){
  background(#C0ffee);
  ellipse(fishX, fishY, 30, 10);
  if(x>0){
    y += 2;
    ellipse(x, y, 8, 8);
    float dx = x - fishX, dy = y - fishY;
    float d = dist(x, y,fishX, fishY);
    fishX += dx / d*4;
    fishY += dy / d*4;
    }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
