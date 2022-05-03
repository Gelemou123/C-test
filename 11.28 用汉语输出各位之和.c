#include <stdio.h>
#include <string.h>
int main()
{
	int data,w;
	scanf("%d",&data);
	printf("这是一个几位数:");
	scanf("%d",&w);
	printf("w=%d\n",w);
	switch (w)
	{
	case 1:printf("各位数字之和为:%d",data);break;					
	case 2:printf("各位数字之和为:%d",data/10+data%10);break;
	case 3:printf("各位数字之和为:%d",data/100+data/10%10+data%10);break;
	case 4:printf("各位数字之和为:%d",data/1000+data/100%10+data/10%100%10+data%10);break;
	case 5:printf("各位数字之和为:%d",data/10000+data/1000%10+data/100%10+data/10%10+data%10);break;
	}
}
