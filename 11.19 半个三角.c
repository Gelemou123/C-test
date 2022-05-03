#include <stdio.h>
int main()
{
	int i,k,j;
	for (i=1;i<=4;i++)
	{
		for (k=4;k>=i;k--)	//¿Õ¸ñÊý4,3,2,1 
		{
			printf(" ");
		}
		for (j=1;j<=i;j++)
		{
			printf("*");
		}
	printf("\n");
	}
 } 
