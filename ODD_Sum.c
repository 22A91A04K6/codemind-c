#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,ar[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            s=s+ar[i];
        }
    }
    printf("%d",s);
}