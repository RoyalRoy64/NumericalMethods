#include<stdio.h>
#include<math.h>
double f(double x,double y);
void main()
{
int i,n;
double x0,y0,x1,y1,h,yn1,x,t;
printf("Enter the step length=");
scanf("%lf",&h);
printf("Enter the value of x0=");
scanf("%lf",&x0);
printf("Enter the value of y1=");
scanf("%lf",&y1);
printf("Enter the value at which the final value is computed=");
scanf("%lf",&x);
n=(x-x0)/h;
for(i=1;i<=n;i++)
{
y1=y0+h*f(x0,y0);
x1=x0+h;
do
{
yn1=y0+h*(f(x0,y0)+f(x1,y1))/2;
t=fabs(yn1-y1);
y1=yn1;
}
while(t>=0.0000005);
y0=yn1;
x0=x1;
}
printf("\n y[%lf]=%lf\n",x0,y0);
}