#include <stdio.h>
int main()
{
	int a,n,sum=0;
	
	while (1)
	{ 
		scanf("%d",&a);		//�������� 
		sum+=a;				//��� 
		if (a<0)
		{
			break;	//�����븺��ʱ����ѭ�� 
		}
	}
	printf("%d",sum);
}
