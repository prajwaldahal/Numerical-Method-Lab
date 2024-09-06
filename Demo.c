#include<stdio.h>
#define f(x) x*x+4*x-1
#define d(x) 2*x+4 /*derivative of f(x)*/
int main()
{
	printf("%d\n",f(1)); /*output = 4*/
	printf("%d\n",d(1)); /*output = 6*/
	printf("%d\n",(f(1))-(d(1))); /*output=6*/
	return 0;
}
