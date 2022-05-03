#include <stdio.h>
#define PI 3.14
	/*int num;
	scanf("%d",&num);			//第一题，输入一个十进制整数转换为对应的八进制和十六进制数 
	printf("八进制是:%o 十六进制是:%x",num,num);*/
	
	
	/*int num1,num2;
	scanf("%d %d",&num1,&num2);
	if (num1>num2)
	{
		printf("最大值为:%d，最小值为:%d",num1,num2);		//第二题，输入两个整数输出最大值和最小值 
	}
	if (num1<num2)
	{
		printf("最大值为:%d，最小值为:%d",num2,num1);
	}*/
	
	
	/*float r,pri,area;
	scanf("%f",&r);											//第三题，输入半径，求圆的周长和面积 
	pri=2*PI*r;
	area=PI*r*r; 
	printf("半径为:%.2f的圆的周长为:%.2f,面积为:%.2f",r,pri,area);*/
	
	
	
	/*int x;
	scanf("%d",&x);
	if (x<1)
	{
		printf("y=%d",x);
	}
	if (x>=1&&x<10)
	{
		printf("y=%d",2*x-1);								//第四题，输入x的值输出对应y的值 
	}
	if (x>=10)
	{
		printf("y=%d",3*x-11);
	}*/
	
	
	
	
	/*int rank;
	scanf("%d",&rank);
	if (rank>=90&&rank<=100)
	{
		printf("A");
	}
	if (rank>=80&&rank<90)
	{
		printf("B");
	}
	if (rank>=70&&rank<80)
	{
		printf("C");
	}
	if (rank>=60&&rank<70)
	{
		printf("D");
	}
	if (rank>=0&&rank<60)
	{
		printf("E"); 
	}
	
	if (rank>100)
		{
			printf("输入错误");					//第五题，给定成绩输出对应等级，用if和switch分别实现 
			return;
		 } 
	switch (rank/10)
	{
		
		case 10:case 9:printf("A");break;
		case 8:printf("B");break;
		case 7:printf("C");break;
		case 6:printf("D");break;
		case 0:case 1:case 2:case 3:case 4:case 5:printf("E");break;
		default :printf("输入错误");
	}*/
	
	
	
	/*int i,hang=0;
	for (i=1;i<=100;i++)
	{
		
		if (i%7==0)
		{
			hang++;
			printf("%4d",i);			//第六题，输出1-100中能被7整除的数，每行输出7个数 
		
			if (hang%7==0)
			{
				printf("\n");
			}
		}
			
	} */
	 
	 
	  
	/*int i,h,sum=0;
	for (i=1;i<=100;i++)
	{
		if (i%7==0)						第七题，1-100能被7整除的数的累加和 
		{
			sum+=i;		
		}
	}	
	printf("%d",sum);*/
		
		
		
	/*int i,j;
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=i;j++)					//第八题，九九乘法表 
		{
			printf("%d*%d=%d\t",j,i,i*j);
		}		
		printf("\n");
	}*/
	

/*int a[3];
int i;
for (i=0;i<=2;i++)
{
	scanf("%d",&a[i]);						//第九题，逆序输出一个三位数 
}
for (i=2;i>=0;i--)
{
	printf("%d",a[i]);
}*/


/*int num,a,b,c;
scanf("%d",&num);
a=num/100;
b=num/10%10;
c=num%10;
if (a*a*a+b*b*b+c*c*c==num)					//第十题，输入任意三位正整数判断是否为水仙花数 
{
	printf("%d是水仙花数",num); 
}
else printf("%d不是水仙花数",num);*/
		
		
		
/*int i,num,a,b,c;		

for (i=1;i<=1000;i++)
{
	a=i/100;
	b=i/10%10;
	c=i%10;	
	if (a*a*a+b*b*b+c*c*c==i)			//第十一题 ,输出所有水仙花数 
	{
		printf("%5d",i);
	}
}*/


/*int a[10];
int i,j,temp;
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (j=9;j>=0;j--)				//第十二题 ，输入十个整数然后逆序输出 
	{
		printf("%5d",a[j]);
	}*/


/*int num1=0,num2=1,num3,i;
for (i=1;i<=20;i++)
{
	num3=num1+num2;
	num1=num2;					//第十三题，输出斐波那契数列前二十项 
	num2=num3;
	printf("%5d",num1);
}*/

/*int a[5];
int i,j,temp;
for (i=0;i<5;i++)
{
	scanf("%d",&a[i]);
	for (j=0;j<5-i-1;j++)
	{
		if (a[j]<a[j+1])				//第十四题，用冒泡排序进行升/降序排列 
		{
			temp=a[j];a[j]=a[j+1];a[j+1]=temp;
		}
	}
	printf("%5d",a[i]);
}*/


/*int i,j,a[15],temp,sum=0;
for (i=0;i<15;i++)
{
	scanf("%d",&a[i]);
	if (a[i]>100&&a[i]<0)
	{
		printf("输入错误");
	}
}
for (i=0;i<15;i++)						//第十五题，求15位学生成绩的最高分，最低分和平均分 
{
	for (j=0;j<15;j++)
	{
		if (a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("最高分:%d",a[j]);
printf("最低分:%d",a[1]);
for (i=0;i<15;i++)
{
	sum+=a[i];
}
printf("平均分%.d",sum/15);
*/ 
	
	
/*char a[20];
int i,num=0;
for (i=0;i<20;i++)
{
	scanf("%c",&a[i]);
	if (a[i]>='a'&&a[i]<='z')			//第十六题，输入字符串统计小写字母的个数 
	{
		num++;
	}
}
printf("%s中共有%d个小写字母",a,num);
*/
	
	
/*void as(char a[])
{
	int i,num=0;
	for (i=0;a[i]!='\0';i++)
	{
			if (a[i]>='a'&&a[i]<='z')			//第十七题，编写一个函数，由实参传来一个字符串，统计小写字母数量 
			{
				num++;
			}
	}
	printf("%d",num);
}
int main()
{
	int num,i;
	char b[10];
	gets(b);
	as(b);
}*/



/*void run(int year)
{
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("%d年是闰年\n",year);			//第十八题， 输入年份和月份，输出对应天数 
	}	
}

int main()
{
	int year,sum=0,day,month;
	run(year);
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	switch (month)
	{
		case 1:sum=day;
		case 2:sum+=day+31;
		case 3:if(year%4==0)
			{
				sum+=29;
			}
			else if (sum+=28)x;
		case 4:sum+=31;
		case 5:sum+=30;
		case 6:sum+=31;
		case 7:sum+=30;
		case 8:sum+=31;
		case 9:sum+=31;
		case 10:sum+=30;
		case 11:sum+=31;
		case 12:sum+=30;
	}
	printf("%d年%d月共有%d天",year,month,sum);
}*/
	
	
	
/*void sushu(int num)
{
	int i;
	for (i=2;i<num;i++)
	{
		if (num%i!=0)
		{
			printf("%d是素数",num);break;
		}
		else printf("不是素数"); break;			//第十九题，判断素数的函数，并在主函数中输入整数 
	}
}

int main()
{
	int num,i;
	
	scanf("%d",&num);
	sushu(num);
}*/
	
/*void shu(int a[])
{
	int i,sum=0;
	for (i=0;i<10;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);				//第二十题，由实参传来一个整型数组，计算所有元素之和，在主函数中测试 
}

int main()
{
	int i,sum,b[10];
	for (i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	shu(b);
}*/
	
	
	
/*void shu(int n)
{
	if (n>1)
	{
		shu(n/2);
	}
	printf("%d",n%2);			//第二十一题，将实参传来的十进制数转换为二进制，并在主函数测试 
}	
int main()
{
	int a;
	scanf("%d",&a);
	shu(a);
	printf("\n");
}*/
	
