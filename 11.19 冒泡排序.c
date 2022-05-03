#include <stdio.h>
int main()
{
	int temp,i,a[10],j;
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		for (j=0;j<=5-i-1;j++)
		{	
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	printf("%5d",a[i]);		
	}
}
