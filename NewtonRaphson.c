#include<stdio.h>
#include<math.h>
#define f(x) x*x+4*x-9 //f(x)
#define d(x) 2*x+4  //derivative of f(x)
int main()
{
	double x0,x1,err=1,a,b;
	int i;
	printf("enter the initial guess:");
	scanf("%lf",&x0); 
	while(fabs(err)>=0.1){
		a=f(x0);
		b=d(x0);
		x1=x0-a/b;
		printf("x%d=%.4lf ",i++,x1);
		err=(x1-x0)/x1;
		printf("err=%.4lf\n",fabs(err));
		x0=x1;
	}
	printf("root=%.4lf",x0);
	return 0;
}
