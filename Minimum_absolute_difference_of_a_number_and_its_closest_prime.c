#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,up,lp,s,m,l,upd,lpd;
	scanf("%d",&n);
	m=n;
	for(m;;m++)
	{
		for(i=2;i<=sqrt(m);i++)
		{
			s=1;
			if(m%i==0)
			{
				s=0;
				break;
			}
		}
		if(s==1)
		{
			up=m;
			break;
		}
	}
	l=n;
	for(l;l>0;l--)
	{
		for(i=2;i<=sqrt(l);i++)
		{
			s=1;
			if(l%i==0)
			{
				s=0;
				break;
			}
		}
		if(s==1)
		{
			lp=l;
			break;
		}
	}
	upd=up-n;
	lpd=n-lp;
	if(lpd<=upd)
	{
		printf("%d",lpd);
	}
	else
	{
		printf("%d",upd);
	}
}