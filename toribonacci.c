#include<stdio.h>

void trib(int x, int y, int z);

int main(void){
  int a = 0, b = 0, c = 1;
  trib(a,b,c);
  return 0;
}

void trib(int x, int y, int z){
  
  int a,b,c;

  if(y == 0 ){
    printf("%d\t",x);
    printf("%d\t",y);
    printf("%d\t",z);
  }

  a = y;
  b = z;
  c = x + y + z;

  if (c > 1000)
  return;

  printf("%d\t",c);

  trib(a,b,c);
}