#include <stdio.h>
int main()
{
	int year;
	printf("���������:\n");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("%d�������29��",year); 
	}
	else printf("%d�������28��",year);
}
