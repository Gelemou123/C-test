#include <stdio.h>
int main()
{
	int i,a,b;	//i是行数,a是空格数，b是*数   空格数自上而下3,2,1,0   *数自上而下1,3,5,7 
	for (i=1;i<=5;i++)
	{
		for (a=0;a<=4-i;a++)
		{
			printf(" ");
		}
		for (b=1;b<=2*i-1;b++)
		{
			printf("*");
		}
	printf("\n");
	 } 
	for (i=1;i<=4;i++)		//下三角空格数量变为1,2,3,4   *数自上而下变为7,5,3,1 
	{
		for (a=1;a<=i;a++)
		{
			printf(" ");
		}
		for (b=1;b<=2*(4-i)+1;b++)
		{
			printf("*");
		}
	printf("\n");
	}
}
