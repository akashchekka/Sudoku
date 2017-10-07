#include<stdio.h>
int main()
{
    int i,j,n,count=1,p,q;
    static int a[10][10];
    printf("Enter the odd number dimensions for two dimensional array:");
    scanf("%d",&n);
    j=n/2;
    i=0;
    a[i][j]=count;
    while(count<=n*n)
    {
        if(i==0&&j!=n-1)
        {
            i=n-1;
            a[i][++j]=++count;
        }
        else if(j==n-1&&i!=0)
        {
            j=0;
            a[--i][j]=++count;
        }
        else if((i==0&&j==n-1)||!(a[i-1][j+1])==0)
        {
            a[++i][j]=++count;
        }
        else
        {
            a[--i][++j]=++count;
        }
    }
    for(p=0;p<n;p++)
    {
        for(q=0;q<n;q++)
        {
            printf("\t%d",a[p][q]);
        }
        printf("\n");
    }
}