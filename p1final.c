#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("enter the values of x1,y1,x2,y2\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  *distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
void output(float x1, float y1,float x2, float y2, float distance)
{
  printf("the destance between the points (%f,%f)and (%f,%f) is %f\n",x1,y1,x2,y2,distance);
}
int main()
{
  float x1,y1,x2,y2,d;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&d);
  output(x1,y1,x2,y2,d);
  return 0;
}
