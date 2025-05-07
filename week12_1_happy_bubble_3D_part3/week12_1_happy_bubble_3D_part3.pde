// week12_1_happy_bubble_3D_part3
// 用 mousePressed 按下去
void setup(){
  size(300, 300, P3D);
}
int [][] state = new int[6][6];
void draw(){
  background(255, 255, 0); // 黃色背景
  ortho(); // 垂直投影
  lights(); // 打光
  noStroke(); // 不要有線
  fill(#FF8BEA); // 球是粉紅色
  
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      pushMatrix(); // 備份矩陣
      translate(25+j*50, 25+i*50); // 照著滑鼠的座標動
      if(state[i][j]==0) sphere(23);
      else sphere(10); // 半徑60的圓球
      popMatrix(); // 還原矩陣
    }
  }
}
void mousePressed(){
  int j = (mouseX)/50, i = (mouseY)/50;
  state[i][j] = 1 - state[i][j];
}
