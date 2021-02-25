#include<stdio.h>
struct function
{ 
 int num,den;  
}
typedef struct function fract;

fract inp()
{
 fract f;
 printf(“Enter the value of numerator : \n”);
 scanf(“%d”,&f.num);
 printf(“Enter the value of denominator :\n”);
 scanf(“%d”,&f.den);
 return f;
}

fract cal(fract f1,fract f2)
{
  fract sum;
  if(f1.den==f2.den)
  {
    sum.num = f1.num + f2.num;
    sum.den  = f1.den;
   return sum;
  }
  else
  {
    sum.num = (f1.num*f2.num)+(f2.num*f1.den);
    sum.den = f1.den*f2.den;
    return sum;
  }
}

int main()
{
  int n;
  printf(“Enter the no. of fractions to be calculated :\n”);
  scanf(“%d”,&n);
  fract res,arr[n];
  res.num=0;
  res.den=1;
  printf(“Enter the fractions one-by-one :\n);
  for(int i=0;i<n;i++)
  {
printf(“Enter the value of fraction %d\n”,(i+1));
    arr[i]=inp(); 
  }
  for(int i=0;i<n;i++)
 {
   res=calc(res.arr[i]);
 }
  printf(“The sum of all fractions entered is %d/%d.\n”,res.num,res.den);
  return 0;
}

