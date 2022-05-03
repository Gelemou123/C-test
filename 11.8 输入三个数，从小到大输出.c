#include <stdio.h>
int main()
{
float num1,num2,num3,result,temp;
printf("请输入num1,num2,num3的值\n");
scanf("%f %f %f",&num1,&num2,&num3);
/*if (num1<=num2)
	{
	result=num1;	
 	} 
else result=num2;*/
/*temp=(num1<=num2)?num1:num2;//用条件运算符代替上面代码 
result=(temp<=num3)?temp:num3;
printf("num1:%f num2:%f num3:%f 最小值是:%f",num1,num2,num3,result);//输入三个数，输出最小值 
return 0;*/
if (num1>num2)//从键盘接受三个数，按从小到大顺序输出 
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
