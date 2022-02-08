#include<stdio.h>
void input(float *base,float *height)
{
printf("entre the  lenght base and height");
scanf("%f , %f",base,height);

}
void find_area(float base , float height, float *area)
{

    *area=((base*height)/2);
}
void output(float base, float height, float area)
{
    printf("area of the triangle is %f * %f/2 = %f",base,height,area);
    
}
int main ()
{
  float x,y,z;
    input(&x,&y);
   find_area(x,y,&z);  
    output(x,y,z);
    return 0;
    
}