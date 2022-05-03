#include <stdio.h>
int main()
{
int i=100,a,b,c;
printf("三位数的水仙花数为:\n");
while (i>=100&&i<1000) 
	{	
		a=i/100;				//将i的百位赋值给a
		b=i/10%10;				//将i的十位赋值给b
		c=i%10;					//将i的个位赋值给c 
	if (i==a*a*a+b*b*b+c*c*c)	//当i为水仙花数时输出 
	printf("%d\n",i);
	i=i+1;
	}	
} 
