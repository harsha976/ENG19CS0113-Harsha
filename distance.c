#include<stdio.h>
#include<math.h>

float input()
{
  float a;
  scanf(“%f”,&a);
  return a;
}
float dif(float x1,float x2,float y1,float y2)
{
 float vol=sqrt(pow((x2-x1),2)+pow((y2-y1),2);
 return vol;
}
void print(float x1,float x2,float y1,float y2,float v)
{
 printf(“The difference between (%.3f,%.3f) and (%.3f,%.3f) is : %.3f\n”,x1,y1,x2,y2,v);
}

int main()
{
 float x1,x2,y1,y2,v;
 printf(“Enter the value of x1\n);
 x1=input();
printf(“Enter the value of y1\n);
y1=input();
printf(“Enter the value of x2\n);
x2=input();
printf(“Enter the value of y2\n);
y2=input();
v=dif(x1,x2,y1,y2);
printf(x1,x2,y1,y2,v);
return 0;
}
		
	
