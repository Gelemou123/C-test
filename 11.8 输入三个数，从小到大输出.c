#include <stdio.h>
int main()
{
float num1,num2,num3,result,temp;
printf("������num1,num2,num3��ֵ\n");
scanf("%f %f %f",&num1,&num2,&num3);
/*if (num1<=num2)
	{
	result=num1;	
 	} 
else result=num2;*/
/*temp=(num1<=num2)?num1:num2;//���������������������� 
result=(temp<=num3)?temp:num3;
printf("num1:%f num2:%f num3:%f ��Сֵ��:%f",num1,num2,num3,result);//�����������������Сֵ 
return 0;*/
if (num1>num2)//�Ӽ��̽���������������С����˳����� 
	{
	result=num1,num1=num2,num2=result;}
	
		if (num1>num3)
		 	{ 
		 	result=num1,num1=num3,num3=result;} 
		 	
		 	if (num2>num3) 
		 	{ 
				result=num2,num2=num3,num3=result;} 
			
	printf("%f %f %f",num1,num2,num3); 

}
