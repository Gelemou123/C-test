#include <stdio.h>
int main()
{
int password; 
printf("���������:");
scanf("%d",&password);
if (password==1)
	{
		printf("���Կ�ʼ����\n");
	}
else	 
		{
 	 	printf("�������"); 
	 return 0; 
		} 
float num1,num2;
char oper;
printf("�����������num1������oper��num2\n");
scanf("%f%c%f",&num1,&oper,&num2); 
switch (oper)
	{
	case '+':printf("%f+%f=%f",num1,num2,num1+num2);break;
	case '-':printf("%f-%f=%f",num1,num2,num1-num2);break;
	case '*':printf("%f*%f=%f",num1,num2,num1*num2);break;
	case '/':
				if (num2==0){
				printf("��������Ϊ0!");}
				else 	
				printf("%f/%f=%f",num1,num2,num1/num2);break;
	case '%':
				printf("%d%%%d=%d",(int)num1,(int)num2,(int)num1%(int)num2);break;
			 	default:printf("���ݲ��Ϸ�");
	}
}	
