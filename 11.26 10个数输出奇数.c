#include <stdio.h>
int main()
{
	int a[10],i,num;
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<=9;i++)
	{
		if (a[i]%2!=0)
		{
			printf("����Ԫ��Ϊ:%d�ڵ�%dλ\n",a[i],i+1);
			
		}
		
	}
}
