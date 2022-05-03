#include <stdio.h>
int main()
{
	int i,n=0,m=0,a[10];
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<=9;i++)
	{
		if (a[i]>0)
		{
			n++;
		}
		if (a[i]<0)
		{
			m++;
		}
	}
printf("正数的个数为:%d,负数的个数为:%d",n,m);
	
}
