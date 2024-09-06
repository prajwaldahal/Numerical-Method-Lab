#include<stdio.h>
#define f1(x,y,z) z
#define f2(x,y,z) 6*x+3*y-2*z
int main()
{
	double m1y,m1z,x0,y0,z0,xl;
	double h,b,a;
	printf("enter initial value of x,y and z respectively: ");
	scanf("%lf%lf%lf",&x0,&y0,&z0);
	printf("enter value of x at which fucntion is to be evaluated: ");
	scanf("%lf",&xl);
	printf("enter step size:");
	scanf("%lf",&h);
	while(x0!=xl)
	{
		m1y=f1(x0,y0,z0);
		m1z=f2(x0,y0,z0);
		y0=y0+h*m1y;
		z0=z0+h*m1z;
		x0=x0+h;
	}
	printf("y(%.3lf)=%.3lf",x0,y0);
	return 0;
}
