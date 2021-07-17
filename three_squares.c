#include <stdio.h>
#include <math.h>

int main(void)
{
  float a, b, c;

  printf("直角三角形に一辺の長さを入力: \n");
  printf("辺 a = ");
  scanf("%f", &a);
  printf("辺 b = ");
  scanf("%f", &b);

  c = sqrt(a*a + b*b);
  printf(" 辺 c = %.3f\n", c);

  return 0;
}