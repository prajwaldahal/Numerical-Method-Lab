#include<stdio.h>
#include<math.h>
double a1,a2,a3;
double f(double x){
	return a1*x*x-a2*x+a3;
} 
int main()
{
	double x0;
	double x1,err;
	printf("enter the coefficient of eqn:");
	scanf("%lf%lf%lf",&a1,&a2,&a3);
	printf("enter the initial guess:");
	scanf("%lf",&x0); 
	do{
		x1=f(x0);
		err=fabs((x1-x0)/x1);
		x0=x1;
	}while(err>=0.01);
	printf("root=%lf",x1);	
	return 0;
}
