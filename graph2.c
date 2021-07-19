//配列のデータを曲線と点でプロット
#include <stdio.h>
#include <math.h>
#define N 100

int main(void)
{
  FILE *gp;

  int i;
  double x[N], y1[N], y2[N];

  for(i = 0; i < N; ++i)
  {
    x[i] = M_PI/18*i;
    y1[i] = sin(x[i]);
    y2[i] = cos(x[i]);
  }

  gp = popen("gnuplot -persist", "w");
  fprintf(gp, "set multiplot\n");
  fprintf(gp, "set xrange[%f:%f]\n",x[0],x[N-1]);
  fprintf(gp, "set yrange [-1.2:1.2\n");
  fprintf(gp, "set xlabel \"x\"\n");
   fprintf(gp, "set ylabel \"x\"\n");

   fprintf(gp, "plot'-'with lines linetype 1\n");
   for (i = 0; i < N; ++i)
   {
     fprintf(gp, "%f\t%f\n",x[i], y1[i]);
   }
   fprintf(gp, "e\n");

      fprintf(gp, "plot'-'with points pointtype 1\n");
   for (i = 0; i < N; ++i)
   {
     fprintf(gp, "%f\t%f\n",x[i], y2[i]);
   }
   fprintf(gp, "e\n");

   fprintf(gp, "set nomultiplot\n");
   fprintf(gp,"exit\n");
   fflush(gp);
   pclose( gp);

   return 0;
}