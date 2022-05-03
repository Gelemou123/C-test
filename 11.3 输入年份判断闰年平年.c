#include <stdio.h>
int main()
{
int a;
printf("请输入一个年份:");
scanf("%d",&a);
if (a%400==0)
	{printf("是世纪闰年");
	}
else if (a%4==0&&a/100!=0)
 {printf("是普通闰年");
 }
else {printf("是平年");
	 }
} 
