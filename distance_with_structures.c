#include<stdio.h>
#include<math.h>
typedef struct
{
 int x;
 int y;
}dist;
float input()
{
 float a;
 scanf(“%f”,&a);
 return a;
} 
float dif(dist c1,dist c2)
{
 float d=sqrt(pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2);
 return d;
}
int main()
{
 float x1,x2,y1,y2;
 printf(“Enter the value of x1\n”);
 x1=input();
 printf(“Enter the value of y1\n”);
 y1=input();
 printf(“Enter the value of x2\n);
 x2=input();
 printf(“Enter the value of y2\n);
 y2=input();
 dist c1={x1,y1};
 dist c2={x2,y2};
 float distance=dif(c1,c2);
 printf(“The distance between (%.3f,%.3f) and (%.3f,%.3f) is :%.3f”,x1,y1,x2,y2,distance);
 return 0; 
}

