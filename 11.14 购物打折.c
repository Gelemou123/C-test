#include <stdio.h>
int main()
{
	float x,y;
	printf("�����빺���:\n");	
	scanf("%f",&x);
	if (x>=2400&&x<3200)
	{
		printf("��Ӧ��%f",x*0.9);
	}
	switch((int)x/1600)
	{ 	
		case 0:printf("��Ӧ��%f",x);break;
		case 1:printf("��Ӧ��%f",(float)x*0.95);break;
		case 2:printf("��Ӧ��%f",(float)x*0.85);break;
		default:printf("��Ӧ��%f",(float)x*0.8);  
	}
	
}
