#include <stdio.h>
int main()
{int num1,num2,c;
printf("num1��num2��ֵ�ֱ�Ϊ:");
scanf("%d %d",&num1,&num2);
c=num1,num1=num2,num2=c;
printf("�������num1=%d\n�������num2=%d",num1,num2);
}
