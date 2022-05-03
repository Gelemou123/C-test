#include <stdio.h>
#define N 40

int main()
{
	int data[N],num1=0,num2=0,i;
	for (i=0;i<=N-1;i++)
	{
		scanf("%d",&data[i]);
		if (data[i]==1)
		{
			num1++;
		}
		if (data[i]==2)
		{
			num2++;
		}
	}
	printf("一号选手的票数为:%d,二号选手的票数为:%d\n",num1,num2);
	if (num1>num2)
	{
		printf("%d>%d，一号选手获胜",num1,num2);
	}
	if (num1<num2)
	{
		printf("%d<%d，二号选手获胜",num1,num2);
	}
}
