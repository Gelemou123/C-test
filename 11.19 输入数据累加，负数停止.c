#include <stdio.h>
int main()
{
	int a,n,sum=0;
	
	while (1)
	{ 
		scanf("%d",&a);		//输入数据 
		sum+=a;				//求和 
		if (a<0)
		{
			break;	//当输入负数时结束循环 
		}
	}
	printf("%d",sum);
}
