#include <stdio.h>
#include <time.h>
int main()
{
	int a,num,temp=1,r=3;
	srand((unsigned)time(NULL));
	num=rand()%100;
	
	while (temp<=3&&a>=0&&a<100)
	{
		printf("这是第%d次输入\n",temp);
		scanf("%d",&a);
		if (a==num)
			{
				printf("猜测正确");
				break;
			}
		if (a!=num)
			{
				printf("猜测错误,您还有%d次机会\n",--r);
			}	
		else printf("输入格式错误"); 
	temp++;
	}
printf("正确答案是%d",num);		
}
	

