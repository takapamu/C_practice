#include <stdio.h>
#include <math.h>

double distance(double *p1, double *p2);

int main(void)

{
  double p1[2], p2[2];

  printf(" 点p1の入力\n");
  scanf("%lf %lf", &p1[0], &p1[1]);
  printf(" 点p2の入力\n");
  scanf("%lf %lf", &p2[0], &p2[1]);
  printf("2点間の距離は%f\n", distance(p1,p2));
  return 0;
}

  double distance(double *p1, double *p2)
  {
    return sqrt((p2[0] - p1[0], 2) + pow (p2[1] - p1[1], 2));
  }
