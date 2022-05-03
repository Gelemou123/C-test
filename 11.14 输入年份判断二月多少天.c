#include <stdio.h>
int main()
{
	int year;
	printf("请输入年份:\n");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("%d年二月有29天",year); 
	}
	else printf("%d年二月有28天",year);
}
