#include<stdio.h>
#include<string.h>
void input_two_string(char *string,char *substring)
   { 
     printf("enter the words\n");
     scanf("%s %s",string,substring);
   }
int str_index(char *string, char *substring)
{
  int i,k,n;
    for (i=0;substring[i]!='\0';)//abcd
      {
        for (k=0;string[k]!='\0';)//ccabcdef
          {
            if (string[k]==substring[i])
            {
              i++;
              k++;
              n=k-strlen(substring);
            }
            else 
            {
              k++;
            }
          }
      }
  return n;
}
void output(char *string, char *substring, int index)
{
  printf("The index of '%s' in '%s' is %d\n",substring,string,index);
}
int main()
{
  char a[20],b[20];
  int n;
  input_two_string(a,b);
  n=str_index(a,b);
  output(a,b,n);
  return 0;
}