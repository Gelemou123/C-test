#include <stdio.h>
void print();
void print_1();
void print_2();
void jiujiu();
void chu();

int main()
{
 	print();
 	print_1();
 	print_2();
	jiujiu();
	chu();
}
void print()
{
	printf("Hello world!\n");
}
void print_1()
{
	int i;
	for (i=1;i<=100;i++)
	{
		printf("%5d",i);
	}
	printf("\n");
}

void print_2()
{
	int i,num=0;
	for (i=1;i<=100;i++)
	{
		printf("%5d",i);
		num++;
		if (num%10==0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

void jiujiu()
{
		int i,j;
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d*%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
	printf("\n");
}

void chu()
{
	int i,j=0;
	for (i=1;i<=100;i++)
	{
		if (i%3==0)
		{
			j++;
			printf("%d\t",i);
			if (j%5==0)
			{
				printf("\n");
			}
		}
		
	}
 } 
//当函数的类型是void和int类型时，声明可以省略,所有函数都在main函数之前，也可以省略 

