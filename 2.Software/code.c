#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//1 pulse=1.8 degree
void drive(int deg, bool side, bool opt){
    int s[4],wave_table[] = {1,0,0,0};
    deg/=1.8;
    if(opt){
      wave_table[3] = 1;
    }
    if (side){
    for (int i=0;i<deg;i++){
      s[0]=wave_table[(i+4)%4];
      s[1]=wave_table[(i+3)%4];
      s[2]=wave_table[(i+2)%4];
      s[3]=wave_table[(i+1)%4];
      printf("%d",s[0]);printf("%d",s[1]);printf("%d",s[2]);printf("%d\n",s[3]);
    }
    }
    else{
    for (int i=0;i<deg;i++){
      s[0]=wave_table[(i+1)%4];
      s[1]=wave_table[(i+2)%4];
      s[2]=wave_table[(i+3)%4];
      s[3]=wave_table[(i+4)%4];
      printf("%d",s[0]);printf("%d",s[1]);printf("%d",s[2]);printf("%d\n",s[3]);
    }
    }
}

int main(){
  drive(36,true,true);
  printf("\n");
}