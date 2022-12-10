#include<stdio.h>
int main()
{
    int a,b,i,d;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        d=a*i;
        printf("%d x %d = %d
",a,i,d);
    }
}