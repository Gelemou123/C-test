#include <stdio.h>
int main()
{
int a;
printf("������һ�����:");
scanf("%d",&a);
if (a%400==0)
	{printf("����������");
	}
else if (a%4==0&&a/100!=0)
 {printf("����ͨ����");
 }
else {printf("��ƽ��");
	 }
} 
