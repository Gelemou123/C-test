#include <stdio.h>
int main()
{int num1,num2,c;
printf("num1和num2的值分别为:");
scanf("%d %d",&num1,&num2);
c=num1,num1=num2,num2=c;
printf("交换后的num1=%d\n交换后的num2=%d",num1,num2);
}
