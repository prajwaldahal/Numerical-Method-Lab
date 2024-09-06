#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-4*x-9
int main()
{
	double a=2;
	double b=3;double m=0,strm,err=1;
	if(f(a)*f(b)>0){
		printf("may have multiple root or may not have");
		return 0;
	}
	else
	{
		while(fabs(err)>0.0001){
			printf("new interval(%.4lf-%.4lf)\n",a,b);
			strm=m;
			m=(a+b)/2;
			printf("f(%.4lf)=%.4lf\n",m,f(m));
			err=(m-strm)/m;
			printf("err=%.4lf\n",fabs(err));
			if(f(m)<0){
				a=m;
			}
			else
			{
				b=m;
			}
		}
		printf("root=%.4lf",m);
	}
	return 0;
}
