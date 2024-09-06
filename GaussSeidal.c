#include<stdio.h>
#include<math.h>
#define f1(x2,x3) (2*x2-x3+11)/6
#define f2(x1,x3) (2*x1-2*x3+5)/7
#define f3(x1,x2) (x1+2*x2+1)/5
int main()
{
	double oldx1,oldx2,oldx3;
	double x1=0,x2=0,x3=0;	
	double e1,e2,e3;
	int i=1;
	do{
		oldx1=x1;
		oldx2=x2;
		oldx3=x3;
		printf("\niteration %d\n",i);
		i++;
		x1=f1(x2,x3);
		x2=f2(x1,x3);
		x3=f3(x1,x2);
		e1=fabs((x1-oldx1)/x1);
		e2=fabs((x2-oldx2)/x2);
		e3=fabs((x3-oldx3)/x3);
		printf("x1=%.3lf,x2=%.3lf,x3=%.3lf,e1=%.4lf,e2=%.4lf,e3=%.4lf",
		x1,x2,x3,e1,e2,e3);
		if(e1<0.001&&e2<0.001&&e3<0.001){
			break;
		}
	}while(1);
	return 0;
}
