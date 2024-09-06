#include<stdio.h>
#define f(x,y) 2*x+y
int main()
{
	double m1,m2,x0,y0,xl;
	double h,b,a;
	printf("enter initial value of x and y respectively: ");
	scanf("%lf%lf",&x0,&y0);
	printf("enter value of x at which fucntion is to be evaluated: ");
	scanf("%lf",&xl);
	printf("enter step size:");
	scanf("%lf",&h);
	while(x0!=xl)
	{
		m1=f(x0,y0);
		b=y0+h*m1;
		a=x0+h;
		m2=f(a,b);
		y0=y0+h/2*(m1+m2);
		x0=x0+h;
	}
	printf("y(%.3lf)=%.3lf",x0,y0);
	return 0;
}
