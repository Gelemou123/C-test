
#include <stdio.h>
int main()
{	
	int i,a[10],max=0,min,sum;
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for (i=0;i<=9;i++)
	{
		
		sum+=a[i];
		printf("%5d",a[i]);
			if (max<a[i])
			{
				max=a[i];
			}
			if (min>a[i])
			{
				min=a[i];
			}					//Ò»Ö±Êä³ö-1 
	}
	printf("\nsum=%d",sum);
	printf("\nmax=%d",max);
	printf("\nmin=%d",min);
}
