#include <stdio.h>
#define PI 3.14
main()
{	//��������������������ֵ����Сֵ	
/* 
	int a,b;
//�������a,b 
	printf("��������������:");
	scanf("%d %d",&a,&b);
//��a,b��ֵ���� 
	if (a>b)
	printf ("����ֵΪa:%d��С��ֵΪ:b:%d",a,b);
//���a����b����������ֵa 
	if (a<b)
	printf ("����ֵΪb:%d��С��ֵΪ:a:%d",b,a);
*/
	
	
	//����Բ�İ뾶������ܳ������
/*
	float r;
//�������r 
	printf("������뾶:");
	scanf("%f",&r);
//����뾶��ֵ��r
	float zhou;
//�������zhou 
	zhou = 2 * PI * r;
//����Բ���ܳ� 
	float mian;
//����Բ����� 
	mian = PI * r * r;
//����Բ����� 
	printf("�ܳ�Ϊ:%.2f,���Ϊ:%.2f",zhou,mian);	
//���Բ���ܳ������ 
*/
	
	//����x��ֵת��Ϊ��Ӧ��yֵ 
/*
	int x=0,y=0;
//�������x.y,������ֵ 
	scanf("%d",&x);
//����һ��������ֵ��x
	if (x<1)
	printf("%d",x); 
//��xС��1ʱ�����x����
	if (x>=1&&x<10)
	printf("%d",2*x-1);
//��x���ڵ���1����xС��10ʱ�����2x-1
	if (x>=10)
	printf("%d",3*x-11);
//��x���ڵ���10ʱ�����3x-11 
*/



	//�����ɼ������Ӧ�ĵȼ�(if)
/* 
	int scores;
//�������(��Ӣ�ĵ���score)
	printf("�����������");
	scanf("%d",&scores);
	if (scores>=0&&scores<=100)		//ȷ��Ϊһ�ٷ��Ʒ��� 
	{
		if (scores>=90)				//���������ڵ���90��ʱΪA�ȼ� 
		{
			printf("A");
		}
		if (scores>=80&&scores<90)	//���������ڵ���80�ֲ���С��90��ʱΪB�ȼ� 
		{
			printf("B");
		}
		if (scores>=70&&scores<80)	//���������ڵ���70�ֲ���С��80��ʱΪC�ȼ� 
		{
			printf("C");
		}
		if (scores>=60&&scores<70)	//���������ڵ���60�ֲ���С��70��ʱΪD�ȼ� 
		{
			printf("D");
		}
		if (scores<=60)				////������У�ѵ���60��ʱΪE�ȼ� 
		{
			printf("E");
		 } 
	}
*/
	
	//�����ɼ������Ӧ�ĵȼ�(switch)
/*	
	int scores;
//�������(��Ӣ�ĵ���score)
	printf("���������:");
	scanf("%d",&scores);
		if (scores>=0&&scores<=100)		//ȷ��Ϊһ�ٷ��Ʒ��� 
	{
		switch (scores/10)				//ȡ������ǰ��λ 
		{
			case 10:case 9:printf("A"); //90-100��ΪA�ȼ� 
					case 8:printf("B");	//80-90��ΪB�ȼ� 
					case 7:printf("C");	//70-79��ΪC�ȼ� 
					case 6:printf("D");	//60-69��ΪD�ȼ� 
					case 1:case 2:case 3:case 4:case 5:case 0:printf("E");
		}								//0-59ΪE�ȼ� 
		 
	}
	else  printf("�����������");		//�������0-100������ʾ������� 
*/	
	
	
	
	//���1-100���ܱ�7��������(���ּ����ÿ�����7����)
/*
	int i;
//���岢��ʼ������i
	int h=0;
//�ñ���h��¼���� 
	for (i=1;i<=100;i++)	//ѭ��100�� 
	{
		
		if (i%7==0)			//��i�ܱ�7����ʱ���i 
		{
			printf("%5d",i);
				h++;		//��iÿ����һ������ʱ��h����һ�� 
				if (h%7==0)	//��h�ܱ�7����ʱ������� 
				{
					printf("\n");
				}
		}
	} 
*/	
	

	//����1-100֮���ܱ�7������������֮��
/*
	int i,sum=0,temp;
	//�������i,�������ĺ�sum,�м�ֵtemp 
 	for (i=1;i<=100;i++)	//ѭ��100�� 
 	{
 		if (i%7==0)			//���i�ܱ�7��������Ӳ���ֵ��sum 
 		{
 			sum+=i;			
		 }
	 }
	 printf("%d",sum);		//����������ĺ� 
*/	

	
	//�žų˷��� 
/*	
	int i,j,k;		
	//����˷��еĵ�һ������i�͵ڶ�������j 
	for (i=1;i<=9;i++)		//
	{
		for (j=1;j<=i;j++)
		{
			printf("%d * %d = %d\t",j,i,i*j);

		}
			printf("\n");
	}
*/	


	
	//��ȡһ����λ���ĸ�λ���������
/*	
	int num;		//����һ�ó���ȡ�����λ 
	scanf("%d",&num);
	printf("��λ��:%d,ʮλ��:%d,��λ��:%d",num % 10,num  /10 %10,num / 100);
*/	
/*	
	int i,j,k;		//��������%1d��������ֻ��һλ 
	scanf("%1d%1d%1d",&i,&j,&k);
	printf("��λ��:%d,ʮλ��:%d,��λ��:%d",k,j,i);
*/


	//����һ����λ���ٵ������ 
/*
	int i,a[3];
	for (i=0;i<=2;i++)
	{
		scanf("%1d",&a[i]);
	}
	for (i=2;i>=0;i--)
	{
		printf("%d",a[i]);
	}
*/
	
	//������λ���������ж��Ƿ���ˮ�ɻ���
/*	
	int num1,num2,num3;
	//  ��λ ʮλ ��λ  
	scanf("%1d%1d%1d",&num1,&num2,&num3);	//%1d�����ַ����� 
	if (num1*num1*num1 + num2*num2*num2 + num3*num3*num3==num1*100 + num2*10 + num3)
	{
		printf("%1d%1d%1d��ˮ�ɻ���",num1,num2,num3);
	 } 
	 else  printf("%1d%1d%1d����ˮ�ɻ���",num1,num2,num3); 
*/
		 
	
	//����ʮ������Ȼ���������
/*	
	int i,a[10];
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	} 
	for (i=9;i>=0;i--)
	{
		printf("%d",a[i]);
	}
*/


	//���쳲��������е�ǰ20��
/*	
	int i,first=1,second=1,third;
	printf("1    "); 
	for (i=1;i<=20;i++)
	{
		third = first + second;
		first = second;
		//���ڶ�λ��ֵ����һλ 
		second = third;
		//������λ��ֵ���ڶ�λ 
		printf("%d\t",first);
	}
*/


	//��ð������ʵ������������ 
	int i,j,k;
	int a[5];
	for (i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);	
	}
	//��С��������
	for (i=0;i<=5;i++)
	{
		int temp=0;
		if (a[i]>a[i+1])
		{
			a[i]=temp;temp=a[i+1];a[i+1]=temp;	
		}	
		printf("%d",a[i]);
	} 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
