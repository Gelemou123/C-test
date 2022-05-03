#include <stdio.h>
#define PI 3.14
main()
{	//输入两个整数，输出最大值和最小值	
/* 
	int a,b;
//定义变量a,b 
	printf("请输入两个整数:");
	scanf("%d %d",&a,&b);
//将a,b的值键入 
	if (a>b)
	printf ("最大的值为a:%d最小的值为:b:%d",a,b);
//如果a大于b，则输出最大值a 
	if (a<b)
	printf ("最大的值为b:%d最小的值为:a:%d",b,a);
*/
	
	
	//输入圆的半径，输出周长和面积
/*
	float r;
//定义变量r 
	printf("请输入半径:");
	scanf("%f",&r);
//键入半径赋值给r
	float zhou;
//定义变量zhou 
	zhou = 2 * PI * r;
//计算圆的周长 
	float mian;
//定义圆的面积 
	mian = PI * r * r;
//计算圆的面积 
	printf("周长为:%.2f,面积为:%.2f",zhou,mian);	
//输出圆的周长和面积 
*/
	
	//输入x的值转换为对应的y值 
/*
	int x=0,y=0;
//定义变量x.y,并赋初值 
	scanf("%d",&x);
//键入一个整数赋值给x
	if (x<1)
	printf("%d",x); 
//当x小于1时，输出x本身
	if (x>=1&&x<10)
	printf("%d",2*x-1);
//当x大于等于1并且x小于10时，输出2x-1
	if (x>=10)
	printf("%d",3*x-11);
//当x大于等于10时，输出3x-11 
*/



	//给定成绩输出对应的等级(if)
/* 
	int scores;
//定义分数(用英文单词score)
	printf("请输入分数：");
	scanf("%d",&scores);
	if (scores>=0&&scores<=100)		//确定为一百分制分数 
	{
		if (scores>=90)				//当分数大于等于90分时为A等级 
		{
			printf("A");
		}
		if (scores>=80&&scores<90)	//当分数大于等于80分并且小于90分时为B等级 
		{
			printf("B");
		}
		if (scores>=70&&scores<80)	//当分数大于等于70分并且小于80分时为C等级 
		{
			printf("C");
		}
		if (scores>=60&&scores<70)	//当分数大于等于60分并且小于70分时为D等级 
		{
			printf("D");
		}
		if (scores<=60)				////当分数校友等于60分时为E等级 
		{
			printf("E");
		 } 
	}
*/
	
	//给定成绩输出对应的等级(switch)
/*	
	int scores;
//定义分数(用英文单词score)
	printf("请输入分数:");
	scanf("%d",&scores);
		if (scores>=0&&scores<=100)		//确定为一百分制分数 
	{
		switch (scores/10)				//取分数的前两位 
		{
			case 10:case 9:printf("A"); //90-100分为A等级 
					case 8:printf("B");	//80-90分为B等级 
					case 7:printf("C");	//70-79分为C等级 
					case 6:printf("D");	//60-69分为D等级 
					case 1:case 2:case 3:case 4:case 5:case 0:printf("E");
		}								//0-59为E等级 
		 
	}
	else  printf("输入分数有误");		//如果不在0-100分内提示输入错误 
*/	
	
	
	
	//输出1-100里能被7整除的数(保持间隔，每行输出7个数)
/*
	int i;
//定义并初始化变量i
	int h=0;
//用变量h记录数据 
	for (i=1;i<=100;i++)	//循环100次 
	{
		
		if (i%7==0)			//当i能被7整除时输出i 
		{
			printf("%5d",i);
				h++;		//当i每满足一次条件时，h自增一次 
				if (h%7==0)	//当h能被7整除时输出换行 
				{
					printf("\n");
				}
		}
	} 
*/	
	

	//计算1-100之间能被7整除的所有数之和
/*
	int i,sum=0,temp;
	//定义变量i,所有数的合sum,中间值temp 
 	for (i=1;i<=100;i++)	//循环100次 
 	{
 		if (i%7==0)			//如果i能被7整除则相加并赋值给sum 
 		{
 			sum+=i;			
		 }
	 }
	 printf("%d",sum);		//输出所有数的和 
*/	

	
	//九九乘法表 
/*	
	int i,j,k;		
	//定义乘法中的第一个乘数i和第二个乘数j 
	for (i=1;i<=9;i++)		//
	{
		for (j=1;j<=i;j++)
		{
			printf("%d * %d = %d\t",j,i,i*j);

		}
			printf("\n");
	}
*/	


	
	//提取一个三位数的各位并倒序输出
/*	
	int num;		//方法一用除和取余求各位 
	scanf("%d",&num);
	printf("个位是:%d,十位是:%d,百位是:%d",num % 10,num  /10 %10,num / 100);
*/	
/*	
	int i,j,k;		//方法二用%1d控制输入只有一位 
	scanf("%1d%1d%1d",&i,&j,&k);
	printf("个位是:%d,十位是:%d,百位是:%d",k,j,i);
*/


	//输入一个三位数再倒序输出 
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
	
	//输入三位正整数，判断是否是水仙花数
/*	
	int num1,num2,num3;
	//  百位 十位 个位  
	scanf("%1d%1d%1d",&num1,&num2,&num3);	//%1d限制字符长度 
	if (num1*num1*num1 + num2*num2*num2 + num3*num3*num3==num1*100 + num2*10 + num3)
	{
		printf("%1d%1d%1d是水仙花数",num1,num2,num3);
	 } 
	 else  printf("%1d%1d%1d不是水仙花数",num1,num2,num3); 
*/
		 
	
	//输入十个整数然后逆序输出
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


	//输出斐波那契数列的前20项
/*	
	int i,first=1,second=1,third;
	printf("1    "); 
	for (i=1;i<=20;i++)
	{
		third = first + second;
		first = second;
		//将第二位赋值给第一位 
		second = third;
		//将第三位赋值给第二位 
		printf("%d\t",first);
	}
*/


	//用冒泡排序实现升降序排列 
	int i,j,k;
	int a[5];
	for (i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);	
	}
	//从小到大排序
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
