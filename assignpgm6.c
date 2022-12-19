#include<stdio.h>

typedef struct greatersmaller
{
 int greater;
 int smaller;
}one;

one findgreatersmaller(int a, int b)
{
 one s;
 if(a>b)
 {
  s.greater = a;
  s.smaller = b;
 }
 else
 {
  s.greater = b;
  s.smaller = a;
 }
 return s;

}

int main()
{
  int x = 20, y =30;
  one result;
  result = findgreatersmaller(x,y);

  printf("The greater number is %d and smaller number is %d\n",result.greater,result.smaller);
  return 0;
}
