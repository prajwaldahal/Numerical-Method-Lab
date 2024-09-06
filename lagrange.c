#include<stdio.h>
int main()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j,d=1;
    printf("\nEnter the number of the terms of the table: ");
    scanf("%d",&n);
    printf("\nEnter the respective values of the variables x and y:");
    for(i=0; i<n; i++)
    {
        scanf ("%f %f",&x[i],&y[i]);
    }
    printf("\nEnter the value of the x to find the respective value of y:");
    scanf("%f",&a);
    for(i=0; i<n; i++)
    {
        s=1;
        t=1;
        for(j=0; j<n; j++)
        {
            if(j!=i)
            {
                s=s*(a-x[j]);
                t=t*(x[i]-x[j]);
            }
        }
        k=k+((s/t)*y[i]);
    }
    printf("\ny(%f): %f",a,k);
    return 0;
}


