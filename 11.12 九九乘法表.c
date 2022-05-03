#include <stdio.h>
int main()
{
	int i,j;			//i是行数也是第二个乘数,j是第一个乘数 
 	for (i=1;i<=9;i++)
 	{
	 
		for (j=1;j<=i;j++)
		{
			printf("%d*%d=%d\t",j,i,j*i);
		}
		printf("\n");
	}
}
