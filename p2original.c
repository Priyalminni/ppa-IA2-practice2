#include<stdio.h>
int input_side()
{
  int a,b,c;
  printf("entre the sides of triangles\n");
  scanf("%d, %d ,%d\n",&a,&b,&c);
  return 0;
}
int check_scalene(int a,int b, int c)
{
  if(a!=b&&b!=c)
  {
printf("the triginal is scalene");
  }

else
{
  printf("the triangle is not triangle\n");
}
}
void output( )