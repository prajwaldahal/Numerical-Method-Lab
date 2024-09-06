#include<stdio.h>
#include<math.h>
unsigned long int fact(unsigned long int n)
{
	if(n==1 || n==0)
	 return 1;
	else 
		return n*fact(n-1);
}
int main()
{
	int x,n,i;
	double sum;
	printf("enter x and n: ");
	scanf("%d%d",&x,&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+pow(x,n)/fact(n);
	}
	printf("%lu",fact(17));
	return 0;
}
