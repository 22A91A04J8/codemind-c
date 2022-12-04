#include<stdio.h>
int dev(int a,int b)
{
    int c=a/b;
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=dev(a,b);
    printf("%d",x);
}