#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f1(y,z)  (17-y+2*z)/20
#define f2(x,z)  (-18-3*x+z)/20
#define f3(x,y)  (25-2*x+3*y)/20
int main()
{
 float x1=0, y1=0, z1=0,e1, e2, e3, e;
 int count=1;
 printf("\nCount\tx\ty\tz\n");
 do
 {
  /* Calculation */
  x1 = f1(y1,z1);
  y1 = f2(x1,z1);
  z1 = f3(x1,y1);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);
  printf("%lf\n",fabs(x1));
	if(fabs(x1)==1&&fabs(y1)==1&&fabs(z1)==1)
		break;
 }while(1);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

 getch();
 return 0;
}

