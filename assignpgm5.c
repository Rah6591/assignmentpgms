#include<stdio.h>//To return a pointer from a function.

int *fun()
{
  static int a = 10;
 return (&a);
}

int main()
{
  int *p;
  p = fun();
  printf("%p\n",p);
  printf("%d\n",*p);

  return 0;

}
