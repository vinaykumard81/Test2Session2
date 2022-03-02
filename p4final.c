
#include <stdio.h>
int input()
{
  int n;
  printf("enter the value up to which you want the series\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int i,j,k,f;
  for (i=0,j=1,k=0;k<n-2;k++)
      {
        if (n==1)
        {
          f=0;
        }
        else if(n==2)
        {
          f=1;
        }
        else
        {
          f=(i+j);
          i=j;
          j=f;
        }
      }
  return f;
}
void output(int n, int f)
{
  printf("the %dth term of fibonacci series is %d\n",n,f);
}
int main()
{
  int n;
  n=input();
  int f;
  f=find_fibo(n);
  output(n,f);
  return 0;
}