#include <stdio.h>
int main()
{
	int sum=0,a[10],i,j,temp,avg;
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);	//接收十个元素 
	}
	for (i=0;i<=9;i++)
	{
		for (j=0;j<9-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;	//对十个数冒泡从小到大排序 
			}
		}
	}
				for (i=0;i<=9;i++)
				{
					sum+=a[i];
				}
				printf("平均值为:%d\n",avg=sum/10);	//求平均值 
	for (i=0;i<=9;i++)
	{
		if (a[i]>avg)
		{
			printf("大于平均值的数为:%3d",a[i]);	//输出大于平均值的数 
		}
	}
	
	
 } 
