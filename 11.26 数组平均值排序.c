#include <stdio.h>
int main()
{
	int sum=0,a[10],i,j,temp,avg;
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);	//����ʮ��Ԫ�� 
	}
	for (i=0;i<=9;i++)
	{
		for (j=0;j<9-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;	//��ʮ����ð�ݴ�С�������� 
			}
		}
	}
				for (i=0;i<=9;i++)
				{
					sum+=a[i];
				}
				printf("ƽ��ֵΪ:%d\n",avg=sum/10);	//��ƽ��ֵ 
	for (i=0;i<=9;i++)
	{
		if (a[i]>avg)
		{
			printf("����ƽ��ֵ����Ϊ:%3d",a[i]);	//�������ƽ��ֵ���� 
		}
	}
	
	
 } 
