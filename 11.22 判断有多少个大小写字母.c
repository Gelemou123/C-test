#include <stdio.h>
int main()
{

	int i,m=0,n=0;
	char a[10];
	for (i=0;i<10;i++)
	{
		scanf("%c%*c",&a[i]);
		if (a[i]>='a'&&a[i]<='z')
		{
			m++;
		}
		if (a[i]>='A'&&a[i]<='Z')
		{
			n++;
		}
	}
	for (i=0;i<=9;i++)
	{
		printf("%c",a[i]);
	}
	printf("小写字母有:%d个，大写字母有:%d个",m,n);
}
