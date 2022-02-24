#include<stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int find_fibo(int n)
{
  int c=0;
  int a=0;
  int b=1;
  for(int i=0; i<n;i++)
    {
      c = a;
      a = b;
      b = c + b;
    }
   return c;
}
void output(int n, int c)
{
  printf("The %dth fibonacci term is %d",n,c);
}
int main()
{
  int a,b;
  a=input();
  b=find_fibo(a);
  output(a,b);
  return 0;
}