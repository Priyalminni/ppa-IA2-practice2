#include<stdio.h>
void input(float *base,float *height)
{
printf("entre the  lenght of  height\n");
scanf("%f",height);
printf("enter the lenght of base\n");
scanf("%f",base);

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
  float base,height;
    input(&base,&height);
   float area;
   find_area(base,height,&area);  
    output(base,height,area);
    return 0;
    
}