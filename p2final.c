#include<stdio.h>
void input_triangle(float*x1,float*y1,float*x2,float*y2,float*x3,float*y3)
{
  printf("Enter co-ordinates of the triangle\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
float is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float istriangle;
  istriangle = 0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
  return istriangle;
}
void output(float istraingle)
{
  if(istraingle==0)
    printf("The given points does not form a triangle");
  else
    printf("The given points forms a triangle");
}
int main()
{
  float x1,y1,x2,y2,x3,y3,istriangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  istriangle = is_triangle(x1,y1,x2,y2,x3,y3);
  output(istriangle);
  return 0;
}
