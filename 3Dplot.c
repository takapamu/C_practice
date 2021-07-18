//三次元プロットのアニメーション

#include <stdio.h>
#include<math.h>
#include<unistd.h>

#define N 100

int main(void)
{
  FILE *gp;

  int i;
  int j;
  double x,y,z,t;

  gp = popen("gnuplot -persist", "w");
  fprintf(gp, "set xrange [-1.2:1.2]\n");
  fprintf(gp, "set yrange [-1.2:1.2]\n");
  fprintf(gp, "set zrange [0:10]\n");
  fprintf(gp, "set xlabel\"x\"\n");
  fprintf(gp, "set xlabel\"y\"\n");
  fprintf(gp, "set xlabel\"z\"\n");

  for(i = 0; j < N; ++j)
  {
    usleep(50000);
    fprintf(gp, "splot '-' with lines linetype 1\n");
      for (i = 0; i < N; ++i)
      {
        t = 0.2 * i;
        x = cos(t + 0.1 * j);
        y = sin(t + 0.1 * j);
        z = t;
        fprintf(gp,"%f\t%f\t%f\n",x ,y, z);
      }
      fprintf(gp,"e\n");
  }
fprintf(gp, "exit\n");
fflush(gp);
pclose(gp);

return 0;

}