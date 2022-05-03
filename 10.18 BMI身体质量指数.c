#include<stdio.h>
int main()
{
system("color 02");
int BMI=0;									//定义变量BMI=0 
int weight;									//定义变量weight 
int height;
printf("成年人身体质量指数:\n\
轻体重BMI BMI<18.5\n\
健康体重BMI 18.5<=BMI<=24\n\
超重BMI 24<=BMI<28\n\
肥胖BMI 28<=BMI\n");						//输出开头介绍 
printf("请输入您的体重\(kg):");
scanf("%d",&weight);						//在CMD中输入体重 
printf("请输入您的身高\(m):");
scanf("%d",&height);						//在CMD中输入身高 
BMI=weight/(height*height);					//导入BMI算法 
if (BMI<18.5)
{printf("您的身体健康指数是:轻体重\n");}			//使用if else语句判断BMI范围并输出对应指数 
else if (18.5<=BMI&&BMI<=24)
{printf("您的身体健康指数是:健康体重\n");} 
else if (24<=BMI&&BMI<28)
{printf("您的身体健康指数是:超重\n");}
else if (28<=BMI)
{printf("您的身体健康指数是:肥胖\n");}
return 0;}

