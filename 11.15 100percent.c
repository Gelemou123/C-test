#include <stdio.h>
int main()
{
	float a=0,b=1,flag=1;
	while (b<=100)
	{
		a=a+flag*1/b;
		flag=-flag;
		b++;
	}
	printf("%f",a);

	
	
	do{
		a=a+flag*1/b;
		flag=-flag;
		b++;
	}while(b<=100);
}
