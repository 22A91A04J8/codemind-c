#include<stdio.h>
#include<math.h>
int dev(int p,int t, int r)
{
    int si;
    si=(p*t*r)/100;
    return si;
}
int main()
{
    int si,p,t,r;
    scanf("%d%d%d",&p,&t,&r);
    int x=dev(p,t,r);
    printf("%d",x);
}