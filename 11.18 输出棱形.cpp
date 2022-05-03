#include <stdio.h>
int main()
{
	int i,j,k;	//i控制行数 j空格数 k星号数 
	/*for (i=1;i<=4;i++)
	{
		for (j=0;j<=i-1;j++)
		{
			printf(" ");
		}
		for (k=1;k<=4;k++)
		{
			printf("*");
		}
	 printf("\n");
	 }*/
	  
	for (i=1;i<=4;i++)
	{
		for (j=0;j<=5-i;j++)		//4,3,2,1
		{
			printf(" ");
		}
		for (k=1;k<=4;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
