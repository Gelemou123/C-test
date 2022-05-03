#include <stdio.h>
int main() 
{
	char username,password,a[5]={"root"};
		printf("请输入用户:\n"); 
		scanf("%s",&a[2]);
			if (username==a[5])
			{
				printf("用户名正确\n请输入口令:\n");
			}
			else printf("用户名错误");
				scanf("%s",&password);
				if (password==a[5])
				{
					printf("欢迎使用简易计算器");
				}
				else printf("密码错误");return 0;
				
				
		float num1,num2;
		char temp;
		char yn;
		printf("请输入两个整形数据，一个运算符\n");
		scanf("%f%f%c",&num1,num2,temp);
		do{
		
		switch (temp){
		case '+':printf("%f+%f=%f",num1,num2,num1+num2);break;
		case '-':printf("%f-%f=%f",num1,num2,num1-num2);break;
		case '*':printf("%f*%f=%f",num1,num2,num1*num2);break;
		case '/':if (num2==0)	printf("除数不能为0");
						else printf("%f/%f=%f",num1,num2,num1/num2);
		case '%':printf("%d%%%d=",(int)num1,(int)num2,(int)num1%(int)num2);break;
		}
		printf("是否继续? Y/N");
		scanf("%d",yn);
		}while (yn=='Y');
		
	}
		
	
				
	

