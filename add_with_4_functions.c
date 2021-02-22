#include<stdio.h>
#include<conio.h>
int input1()
{
  int no1;
  printf(“Enter first number\n”);
  scanf(“%d”,&no1);
  return no1;
}
int input2()
{
  int no2;
  printf(“Enter second number\n”);
  scanf(“%d”.&no2);
  return no2;
}
int sum(a,b)
{
  int s=a+b;
  return s;
}
void print(se)
{
  printf(“Sum of %d and %d is : %d\n”,a,b,se);
}

int main()
{
  int a=input1();
  int b=input2();
  se = sum(a,b);
  print(se);
  return 0;
}

