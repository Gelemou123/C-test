#include <stdio.h>
#include <string.h>
int main()
{
	int data,w;
	scanf("%d",&data);
	printf("����һ����λ��:");
	scanf("%d",&w);
	printf("w=%d\n",w);
	switch (w)
	{
	case 1:printf("��λ����֮��Ϊ:%d",data);break;					
	case 2:printf("��λ����֮��Ϊ:%d",data/10+data%10);break;
	case 3:printf("��λ����֮��Ϊ:%d",data/100+data/10%10+data%10);break;
	case 4:printf("��λ����֮��Ϊ:%d",data/1000+data/100%10+data/10%100%10+data%10);break;
	case 5:printf("��λ����֮��Ϊ:%d",data/10000+data/1000%10+data/100%10+data/10%10+data%10);break;
	}
}
