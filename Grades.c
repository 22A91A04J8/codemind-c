#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    int s;
    s=(p+c+b+m+cs)/5;
    if(s>=90)
    {
        printf("Grade A");
    }
    else if(s>=80&&s<90)
    {
        printf("Grade B");
    }
    else if(s>=70&&s<80)
    {
        printf("Grade C");
    }
    else if(s>=60&&s<70)
    {
        printf("Grade D");
    }
    else if(s>=40&&s<60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}