#include<stdio.h>
#include<math.h>
double f(double x){
	return x*x*x+3*x*x;
}

int main()
{
 float l, u, v, h, x;
 int i, k;
 printf("Enter lower and upper limit of v: ");
 scanf("%f%f", &l,&u);
 printf("Enter number of sub intervals: ");
 scanf("%d", &k);
 h = (u - l)/k;

 v = f(l) + f(u);
 for(i=1; i<= k-1; i++)
 {
  x = l + i*h;
  if(i % 3==0)
  	v = v + 2 * f(x);	
  else
  	v=v + 3*f(x);	
 }
 v = v * 3/8*h;
 printf("\nRequired value of v is: %.3f", v);
 return 0;
}
