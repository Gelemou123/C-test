#include <stdio.h>
int main()
{
int password; 
printf("请输入口令:");
scanf("%d",&password);
if (password==1)
	{
		printf("可以开始运算\n");
	}
else	 
		{
 	 	printf("输入错误"); 
	 return 0; 
		} 
float num1,num2;
char oper;
printf("请输入操作数num1操作符oper和num2\n");
scanf("%f%c%f",&num1,&oper,&num2); 
switch (oper)
	{
	case '+':printf("%f+%f=%f",num1,num2,num1+num2);break;
	case '-':printf("%f-%f=%f",num1,num2,num1-num2);break;
	case '*':printf("%f*%f=%f",num1,num2,num1*num2);break;
	case '/':
				if (num2==0){
				printf("除数不能为0!");}
				else 	
				printf("%f/%f=%f",num1,num2,num1/num2);break;
	case '%':
				printf("%d%%%d=%d",(int)num1,(int)num2,(int)num1%(int)num2);break;
			 	default:printf("数据不合法");
	}
}	
