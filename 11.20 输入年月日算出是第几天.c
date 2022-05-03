#include <stdio.h>
int main()
{
	int year,month,day,sum=0;
	printf("请输入年月日:\n");
	scanf("%d %d %d",&year,&month,&day);
	/*if(year%4==0)
	{	
		switch (month)
		{
			case 1:printf("%d",day);break;
			case 2:printf("%d",day+31);break;
			case 3:printf("%d",day+31+29);break;
			case 4:printf("%d",day+31+29+31);break;
			case 5:printf("%d",day+31+29+31+30);break;
			case 6:printf("%d",day+31+29+31+30+31);break;
			case 7:printf("%d",day+31+29+31+30+31+30);break;
			case 8:printf("%d",day+31+29+31+30+31+30+31);break;
			case 9:printf("%d",day+31+29+31+30+31+30+31+31);break;
			case 10:printf("%d",day+31+29+31+30+31+30+31+31+30);break;
			case 11:printf("%d",day+31+29+31+30+31+30+31+31+30+31);break;
			case 12:printf("%d",day+31+29+31+30+31+30+31+31+30+31+30);break;
		}
	}
	if(year%4!=0)
	{	
		switch (month)
		{
			case 1:printf("%d",day);break;
			case 2:printf("%d",day+31);break;
			case 3:printf("%d",day+31+28);break;
			case 4:printf("%d",day+31+29+31);break;
			case 5:printf("%d",day+31+29+31+30);break;
			case 6:printf("%d",day+31+29+31+30+31);break;
			case 7:printf("%d",day+31+29+31+30+31+30);break;
			case 8:printf("%d",day+31+29+31+30+31+30+31);break;
			case 9:printf("%d",day+31+29+31+30+31+30+31+31);break;
			case 10:printf("%d",day+31+29+31+30+31+30+31+31+30);break;
			case 11:printf("%d",day+31+29+31+30+31+30+31+31+30+31);break;
			case 12:printf("%d",day+31+29+31+30+31+30+31+31+30+31+30);break;
		}
	}
	*/
	switch (month)
	{
		case 1:sum+=day;break;
		case 2:sum+=31;break;
		case 3:sum+=29;break;
		case 4:sum+=31;break;
		case 5:sum+=30;break;
		case 6:sum+=31;break;
		case 7:sum+=30;break;
		case 8:sum+=31;break;
		case 9:sum+=31;break;
		case 10:sum+=30;break;
		case 11:sum+=31;break;
		case 12:sum+=30;break;
	}
	if((year%4==0&&year%100!=0||year%400==0)&&month>=3) 
         sum++;
	printf("%d\n",sum);
}
