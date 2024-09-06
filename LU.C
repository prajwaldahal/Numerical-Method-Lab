#include<stdio.h>
#include<conio.h>
int main()
{
    float a[20][20]= {0},l[20][20]= {0}, u[20][20];
    float b[20]= {0}, x[20]= {0},y[20]= {0};
    int i,j,k,n;
    printf("Enter the order of square matrix: ");
    scanf("%d",&n);
    printf("\nEnter matrix element:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("\nEnter the constant terms: \n");
    for(i=0; i<n; i++)
    {
        scanf("%f",&b[i]);
    }
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(i<=j)
            {
                u[i][j]=a[i][j];
                for(k=0; k<i-1; k++)
                    u[i][j]-=l[i][k]*u[k][j];
                if(i==j)
                    l[i][j]=1;
                else
                    l[i][j]=0;
            }
            else
            {
                l[i][j]=a[i][j];
                for(k=0; k<=j-1; k++)
                    l[i][j]-=l[i][k]*u[k][j];
                l[i][j]/=u[j][j];
                u[i][j]=0;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        y[i]=b[i];
        for(j=0; j<i; j++)
        {
            y[i]-=l[i][j]*y[j];
        }
    }
    for(i=n-1; i>=0; i--)
    {
        x[i]= y[i];
        for(j=i+1; j<n; j++)
        {
            x[i]-=u[i][j]*x[j];
        }
        x[i]/=u[i][i];
    }
    printf(" Solution\n");
    for(i=0; i<n; i++)
    {
        printf("x%d=%.3f  ",i+1,x[i]);
    }
    return 0;
}
