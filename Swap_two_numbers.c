#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c,d;
    c=a,d=b;
    b=a,a=b;
    a=d,b=c;
    printf("%d
%d",d,c);
}