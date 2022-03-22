#include<stdio.h>
int input_side()
{
  int sides;
  printf("entre the sides of triangles\n");
  scanf("%d",&sides);
  return sides;
}
int check_scalene(int a,int b, int c)
{
  if(a!=b && b!=c && a!=c )

  {
return 1;
  }
return 0;
}
void output( int a, int b, int c,int isscalence)
{
if(isscalence)
{
    printf("the triangle is of the sides %d,%d,%d is a scalence\n",a,b,c);
}
else{
    printf("the triangle is  of the sides %d,%d,%d not scalence\n",a,b,c);
}
}

int main()
{
int x = input_side();
int y = input_side();
int z = input_side();
int result = check_scalene(x,y,z);
output( x,y,z,result);
return 0;
}