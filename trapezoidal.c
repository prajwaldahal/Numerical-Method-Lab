#include<stdio.h>
#include<math.h>
double f(double x){
	return exp(x);
}

int main()
{
 float l, u, v=0.0, h, x;
 int i, k;
 printf("Enter l and u limit of v: ");
 scanf("%f%f", &l,&u);
 printf("Enter number of sub intervals: ");
 scanf("%d", &k);
 h = (u - l)/k;

 v = f(l) + f(u);
 for(i=1; i<= k-1; i++)
 {
  x = l + i*h;
  v = v + 2 * f(x);
 }
 v = v * h/2;
 printf("\nRequired value of v is: %.3f", v);
 return 0;
}
