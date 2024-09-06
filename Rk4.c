#include<stdio.h>
double f(double x,double y){
	return x*x+y*y;
}
int main()
{
	double m1,m2,m3,m4,x0,y0,xl;
	double h;
	printf("enter initial value of x and y respectively: ");
	scanf("%lf%lf",&x0,&y0);
	printf("enter value of x at which fucntion is to be evaluated: ");
	scanf("%lf",&xl);
	printf("enter step size:");
	scanf("%lf",&h);
	while(x0!=xl)
	{
		m1=f(x0,y0);
		m2=f(x0+1/2.0*h,y0+1/2.0*h*m1);
		m3=f(x0+1/2.0*h,y0+1/2.0*h*m2);
		m4=f(x0+h,y0+h*m3);
		y0=y0+h/6*(m1+2*m2+2*m3+m4);
		x0=x0+h;
	}
	printf("y(%.3lf)=%.3lf",x0,y0);
	return 0;
}
