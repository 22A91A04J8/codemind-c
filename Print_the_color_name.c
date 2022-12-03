#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='G'||ch=='g')
    {
        printf("Green");
    }
    else if(ch=='B'||ch=='g')
    {
        printf("Blue");
    }
    else if(ch=='Y'||ch=='y')
    {
        printf("Yellow");
    }
    else
    {
        printf("-1");
    }
}