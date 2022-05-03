#include <stdio.h>
int main()
{
	int i,j,k;		//大中小马
	for (i=1;i<=100/3;i++)
	{
		for (j=1;j<=100/2;j++)
		{
			k=100-i-j;
			if (3*i+2*j+k/2==100&&k%2==0)
				{
				printf("%d %d %d\n",i,j,k);
				}
		}
	}	 
} 
