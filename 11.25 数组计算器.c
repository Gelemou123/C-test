#include <stdio.h>
int main() 
{
	char username,password,a[5]={"root"};
		printf("�������û�:\n"); 
		scanf("%s",&a[2]);
			if (username==a[5])
			{
				printf("�û�����ȷ\n���������:\n");
			}
			else printf("�û�������");
				scanf("%s",&password);
				if (password==a[5])
				{
					printf("��ӭʹ�ü��׼�����");
				}
				else printf("�������");return 0;
				
				
		float num1,num2;
		char temp;
		char yn;
		printf("�����������������ݣ�һ�������\n");
		scanf("%f%f%c",&num1,num2,temp);
		do{
		
		switch (temp){
		case '+':printf("%f+%f=%f",num1,num2,num1+num2);break;
		case '-':printf("%f-%f=%f",num1,num2,num1-num2);break;
		case '*':printf("%f*%f=%f",num1,num2,num1*num2);break;
		case '/':if (num2==0)	printf("��������Ϊ0");
						else printf("%f/%f=%f",num1,num2,num1/num2);
		case '%':printf("%d%%%d=",(int)num1,(int)num2,(int)num1%(int)num2);break;
		}
		printf("�Ƿ����? Y/N");
		scanf("%d",yn);
		}while (yn=='Y');
		
	}
		
	
				
	

