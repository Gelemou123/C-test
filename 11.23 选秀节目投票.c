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
	printf("һ��ѡ�ֵ�Ʊ��Ϊ:%d,����ѡ�ֵ�Ʊ��Ϊ:%d\n",num1,num2);
	if (num1>num2)
	{
		printf("%d>%d��һ��ѡ�ֻ�ʤ",num1,num2);
	}
	if (num1<num2)
	{
		printf("%d<%d������ѡ�ֻ�ʤ",num1,num2);
	}
}
