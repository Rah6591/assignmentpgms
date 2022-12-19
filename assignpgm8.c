#include<stdio.h>//Area and Perimeter of  Rectangle.
int area(int,int );
int perimeter(int,int);

int area(int a,int b)
{
 int area;
 area = a*b;
 return area;
}

int perimeter(int a,int b)
{
  int perimeter;
  perimeter = 2*(a+b);
  return perimeter;
}

int main()
{
  int length = 10;
  int breadth = 8;

 printf("Area of the rectangle is : %d\n",area(length,breadth));
 printf("Perimeter of the rectangle is %d\n",perimeter(length,breadth));

 return 0;

}
