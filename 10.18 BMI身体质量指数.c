#include<stdio.h>
int main()
{
system("color 02");
int BMI=0;									//�������BMI=0 
int weight;									//�������weight 
int height;
printf("��������������ָ��:\n\
������BMI BMI<18.5\n\
��������BMI 18.5<=BMI<=24\n\
����BMI 24<=BMI<28\n\
����BMI 28<=BMI\n");						//�����ͷ���� 
printf("��������������\(kg):");
scanf("%d",&weight);						//��CMD���������� 
printf("�������������\(m):");
scanf("%d",&height);						//��CMD��������� 
BMI=weight/(height*height);					//����BMI�㷨 
if (BMI<18.5)
{printf("�������彡��ָ����:������\n");}			//ʹ��if else����ж�BMI��Χ�������Ӧָ�� 
else if (18.5<=BMI&&BMI<=24)
{printf("�������彡��ָ����:��������\n");} 
else if (24<=BMI&&BMI<28)
{printf("�������彡��ָ����:����\n");}
else if (28<=BMI)
{printf("�������彡��ָ����:����\n");}
return 0;}

