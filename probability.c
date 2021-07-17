#include <stdio.h>
#include <stdlib.h> /*乱数用*/
#include <time.h>  /*時間用*/

#define pow2(x) ((x) * (x))
#define pow3(x) ((x) * (x) * (x))

#define TRY 10

char mazai_sukiki(int x)
{
    double a, b, c;
    a = pow3(x) * 13 / 6.0;
    b = pow2(x) * 17 / 2.0;
    c = x * 43 / 3.0;

    return (char)(a - b + c + 97);
}

int main(){
  srand((unsigned)time(NULL));
  int i, j;
  for(i = 0; i < TRY; i++)
  {
    for(j = 0; j < 5; j++)
    {
      putchar( mazai_sukiki( rand() %4 ));
    }
    putchar('\n');
  }
  return 0;
}

