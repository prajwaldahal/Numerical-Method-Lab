#include<stdio.h>
#include<math.h>
double a1,a2,a3;
double f( double x){
	return a1*x*x+a2*x-a3;
}
int main()
{
	double x0,x1;
	double x2,err=1;
	double fx0,fx1;
	printf("enter the coefficient of eqn:");
	scanf("%lf%lf%lf",&a1,&a2,&a3);
	printf("enter the initial guess:");
	scanf("%lf%lf",&x0,&x1); 
	int i=1;
	while(err>0.05){
		fx0=f(x0);
		fx1=f(x1);
		x2=x1-(fx1*(x1-x0)/(fx1-fx0));
		printf("x%d=%.4lf ",i++,x2);
		err=fabs((x2-x1)/x2);
		printf("err=%.4lf\n",err);
		x0=x1;
		x1=x2;
	}
	printf("root=%.4lf",x1);
	return 0;
}
