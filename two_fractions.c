#include<stdio.h>
typedef struct
{
 int n;
 int d;
}fract;
int input()
{
 int a;
 scanf(“%d”,&a);
 return a;
}
float sum(fraction a,fraction b)
{
 fraction res;
  if(a.b = b.d)
  {
    res.d = a.d;
    res.n = a.n+b.n;
  }
  else
  {
    res.d = a.d*b.d:
    res.n = (a.n*b.d)+(b.n*a.d); 
  }
 return res; 
} 

int main()
{
  fraction a,b,c;
  int n1,n2,d1,d2;
  float s;
  printf(“Enter the numerator of first fraction”);
  n1=input();
  printf(“Enter the denominator of first fraction”);
  d1=input();
  printf(“Enter the numerator of second fraction”);
  n2=input();
  printf(“Enter the denominator of second fraction”);
  d2=input();
  a={n1,d1};
  b={n2,d2};
  s=sum(a,b);
  printf(“Sum of fraction %d / %d and %d / %d is %d/%d”,a.n,a.d,b.n,b.d,res.n/,res.d);
  return 0; 
}
