#include <stdio.h>

void
funcA(int i)
{
  i = 7;
}

void
funcB(int *i)
{
  (*i) = 222;
}

int main()
{
  int a = 3;

  printf("a = %d\n" , a);

  funcA(a);
  printf("after funcA() : a = %d\n", a);

  funcB(&a);
  printf("after funcB() : a = %d\n", a);

  return 0;

}