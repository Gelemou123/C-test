#include <stdio.h>
int main()
{
	int i,n,a[n],sum=0,temp,j;
	printf("һ���ж�����ͬѧ�ĳɼ���:\n");
	scanf("%d",&n);							//һ����n��ͬѧ 
	printf("��������%d��ͬѧ�ĳɼ�:\n",n);
	for (i=0;i<=n-1;i++)				//����i=0��ѭ��ִ��n-1�� 
	{
		scanf("%d",&a[i]);				//�Ӽ����������ݸ������е�Ԫ�� 
		printf("��%d���ĳɼ�Ϊ:%d\n",i+1,a[i]);	
		sum+=a[i];						//����ܷ�sum 
	}
	printf("��һ���ĳɼ���:%d\n",a[0]);	//�����һ�� 
	printf("�������ĳɼ���:%d\n",a[4]);	//��������� 
	printf("�ܷ�Ϊ:%d\nƽ����Ϊ:%d",sum,sum/n);	//����ֺܷ�ƽ���� 
	for (i=0;i<n-1;i++)				//ѭ��n-1�� 
	{
		for (j=0;j<=n-i-1;j++)		 
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	printf("��СֵΪ%d,���ֵΪ%d",a[0],a[n]);
	
 } 
