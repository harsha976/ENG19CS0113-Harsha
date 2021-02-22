#include<stdio.h>
float input(float *h,float *b,float *d)
{
  printf(“Enter the value of h,b and d”);
  scanf(“%f%f%f”,h,b,d);
 }
 float vol(float h,float b,float d)
 {
  float v=((h*b*d)+(d/d))/3;
  return v;
 }
 void print(float v1)
 {
   printf(“Volume of tromboloid is : %f”,v1);
 }
int main()
{
 float a,b,c,v1;
 input(&a,&b,&c);
 v1=vol(a,b,c);
 print(v1);
 return 0;
}

