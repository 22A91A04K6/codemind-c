#include<stdio.h>
int main()
{
    int n,i,j,s=0,v=0,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    for(j=1;j<=n;j++)
    {
        v=v+j;
    }
    b=(v*v)-s;
    printf("%d",b);
}