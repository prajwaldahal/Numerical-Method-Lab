#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,sumx=0,sumy=0,sumxx=0,sumxy=0,a,b,x1;
	int i,n;
	printf("enter number of observation: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter value of x%d and y%d respectively: ",i+1,i+1);
		scanf("%lf%lf",&x,&y);
		sumx+=x;
		sumy+=y;
		sumxx+=x*x;
		sumxy+=x*y;
	}
	b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
	a=(sumy-b*sumx)/n;
	printf("enter value of x at which y is to be evaluated: ");
	scanf("%lf",&x1);
	printf("when x=%.2lf, y is %.2lf",x1,a+x1*b);
	return 0;
}
