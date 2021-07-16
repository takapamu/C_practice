#include <stdio.h>

int main()
{
  int i;
  int n;

  printf("自然数を入力してください。\nn=");
  scanf("%d", &n);

  printf("入力された自然数の約数は\n");

  int remainder,nn,num;

  num = 0;

  for( int i = 0; i < n; i++)
  {
    nn = i + 1;
    remainder = n % nn;
    if( nn <= 30000000)
    {
      if( remainder == 0 )
      {
      printf("%d\n", nn);
      num = num + nn;
      }
    }
  }
  printf("です。\n");

  printf("また、約数の合計値は、%dです。",num);

  return 0;
}