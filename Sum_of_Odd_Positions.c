#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    scanf("%d",&n);
    for(i=0l;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2!=0)
        sum=sum+a[i];
    }
    printf("%d",sum);
}