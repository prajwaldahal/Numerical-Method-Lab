#include<stdio.h>
#include<math.h>
double f(double x){
	return 1/(1+x);
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
  if(i % 2==0)
  	v = v + 2 * f(x);	
  else
  	v=v + 4*f(x);	
 }
 v = v * h/3;
 printf("\nRequired value of v is: %.3f", v);
 return 0;
}
