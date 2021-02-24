#include<stdio.h>
int input()
{
 int n;
 scanf(“%d”,&n);
 return n;
}
int snum(int a)
{
 int ar[a];
 int s=0;
 for(int i=0;i<a;i++)
 {
   printf(“Enter number at %d position”,i);
   scanf(“%d”,&a[i]);
   s=s+a[i];
   return s;
 }
}
int main()
{
 printf(“Enter the number of numbers you want to add”);
 int no=input();
 printf(“Total sum of %d numbers is %d”,no,snum(no));
return 0; 

}


