#include <stdio.h>
#include <time.h>
int main()
{
	int a,num,temp=1,r=3;
	srand((unsigned)time(NULL));
	num=rand()%100;
	
	while (temp<=3&&a>=0&&a<100)
	{
		printf("���ǵ�%d������\n",temp);
		scanf("%d",&a);
		if (a==num)
			{
				printf("�²���ȷ");
				break;
			}
		if (a!=num)
			{
				printf("�²����,������%d�λ���\n",--r);
			}	
		else printf("�����ʽ����"); 
	temp++;
	}
printf("��ȷ����%d",num);		
}
	

