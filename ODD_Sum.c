#include <stdio.h>

int main()
{
  int array[100],i,n,sum=0;
  scanf("%d",&n);
  for (i=0; i < n; i++)
      {
	    scanf("%d", &array[i]);
	    if(array[i]%2!=0)
		  sum = sum +array[i];
	  }
	  
	  printf("%d",sum);     
  return 0;
}
