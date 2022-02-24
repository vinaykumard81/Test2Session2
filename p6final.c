#include<stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
 
int is_prime(int n)
{
  if (n==0 || n==1)
  return 1;  
  for (int i=2;i<sqrt(n);i++)
  {
    if((n%i) ==0)
    return 0;
  }
  return 1;
}
void output(int n, int is_prime)
{
  if (is_prime==1)
    printf("%d is a prime number\n",n);
  else 
    printf("%d is not a prime number\n",n);
}
int main()
{
  int n,cmp;
  n=input_number();
  cmp=is_prime(n);
  output(n,cmp);
  return 0;
}
