#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the value up to which you want the series\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  for (int i=1;i<n;i++)//a[n]->2-n
    {
      a[i]=i+1;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
    for (int i=1;i<=n;i++)
    {
      for (int k=2;k<a[i];k++)
        {
          if (a[i]%k==0)
          {
            a[i]=0;
            break;
          }
        }
    }
    
}
void out_put(int n, int a[n])
{
  for (int i=1;i<n;i++)
    {
      if (a[i]!=0)
      {
        printf("%d\n",a[i]);
      }
    }
}
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}

