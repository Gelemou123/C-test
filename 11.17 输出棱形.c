#include <stdio.h>
int main()
{
	int i,a,b;	//i������,a�ǿո�����b��*��   �ո������϶���3,2,1,0   *�����϶���1,3,5,7 
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
	for (i=1;i<=4;i++)		//�����ǿո�������Ϊ1,2,3,4   *�����϶��±�Ϊ7,5,3,1 
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
