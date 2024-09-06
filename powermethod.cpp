#include<stdio.h>
#include<math.h>
int main()
{
	 float a[10][10], x[10],newx[10];
	 float temp, k, kold, error;
	 int i,j,n, step=1;
	 printf("Enter Order of Matrix: ");
	 scanf("%d", &n);
	 printf("Enter Tolerable Error: ");
	 scanf("%f", &error);
	 printf("Enter Coefficient of Matrix:\n");
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   scanf("%f", &a[i][j]);
		  }
	 }
	 printf("Enter Initial Guess Vector:\n");
	 for(i=1;i<=n;i++)
	 {
		scanf("%f", &x[i]);
	 }
	 kold = 1;
	 up:
	 for(i=1;i<=n;i++)
	 {
		  temp = 0.0;
		  for(j=1;j<=n;j++)
		  {
		   	temp = temp + a[i][j]*x[j];
		  }
		  newx[i] = temp;
	 }
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = newx[i];
	 }
	 k = fabs(x[1]);
	 for(i=2;i<=n;i++)
	 {
		  if(fabs(x[i])>k)
		  {
		   	k = fabs(x[i]);
		  }
	 }
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x[i]/k;
	 }
	 if(fabs((k-kold)/k)>error)
	 {
		  kold=k;
		  step++;
		  goto up;
	 }
	 printf("Eigen Value = %f\n", k);
	 printf("Eigen Vector:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("%f\t", x[i]);
	 }
	 return 0;
}
