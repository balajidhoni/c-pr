
#include <stdio.h>

int main(void) 
{
	int n,k,i,result=1;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		result=result*n;	
	}
	printf("%d",result);
	return 0;
}
