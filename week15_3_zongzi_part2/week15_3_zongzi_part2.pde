// week15-3_zongzi_part2
PImage zongzi;
void setup(){
  size(600, 400);
  zongzi = loadImage("zongzi.png");
  imageMode(CENTER);
}
float [] x = new float[100];
float [] y = new float[100];
int N = 0;
void draw(){
  background(#C0ffee);
  for(int i=0; i<N; i++){
    image(zongzi, x[i], y[i], 60, 50);
    y[i]++;
    if(y[i]>400){
      for(int k=i; k<N-1; k++){
        x[k] = x[k+1];
        y[k] = y[k+1];
      }
      N--;
    }
  }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
