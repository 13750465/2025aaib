//week04-4_void_mousePressed_x_y_2_ellipse
//File-Prefrenece
void setup(){
  size(600, 400);
}  
int x,y;
void draw(){
  background(#C0ffee);
  if(x>0){
    y += 2;
    ellipse(x, y, 8, 8);
    }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
