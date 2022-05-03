#include <stdio.h>
int main()
{
	/*int i,j,k,a[10],temp;
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<=9-1;i++)
	{
		k=i;
		for (j=i+1;j<=9;j++)
		{
			if (a[j]<a[i])
			{
				k=j;
			}
		}
	temp=a[k];a[k]=a[i];a[i]=temp;
	}
 for (i=0;i<=9;i++)
 {
 	printf("%5d",a[i]);
 }*/

	int x,i,j,temp,a[10]={9,8,7,6,5,4,3,2,1,0};
	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
		}
	}
	for (i=0;i<=9;i++)
	{
		printf("%5d",a[i]);
	}
	printf("请输入一个数:\n");
	scanf("%d",&x);
	for (i=0;x==a[i];i++)
	{
		printf("这个数在数组a[10]里");
	}
	while (x!=a[i]) printf("不在数组里");
} 
