#include<stdio.h>
#include<math.h>
double a1,a2,a3;
double f( double x){
	return a1*x*x-a2*x+a3;
}
int main()
{
	double a,b;
	double m,fm,err=1;
	printf("enter the coefficient of eqn:");
	scanf("%lf%lf%lf",&a1,&a2,&a3);
	printf("enter the initial guess:");
	scanf("%lf%lf",&a,&b); 
	if(f(a)*f(b)>0){
		printf("may have multiple root or may not have");
		return;
	}
	printf("a\tb\tm\tf(m)\terror\n");
	while(1)
	{	
		m=(a+b)/2;
		fm=f(m);
		printf("%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",a,b,m,f(m),err);
		if(fm<0)
			a=m;
		else
			b=m;
		err=fabs((a-b)/b);
		if(err<=0.05){
			printf("%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",
			a,b,m,f(m),err);
			printf("root=%.3f",m);
			break;
		}
	}
	return 0;
}
