#include<stdio.h>
int main()
{
    int sp,cp,amo;
    scanf("%d%d",&sp,&cp);
    amo=cp-sp;
    if(amo>0){
        printf("Profit");
    }
    else if(amo<0){
        printf("Loss");
    }
}