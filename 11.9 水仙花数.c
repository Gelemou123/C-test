#include <stdio.h>
int main()
{
int i=100,a,b,c;
printf("��λ����ˮ�ɻ���Ϊ:\n");
while (i>=100&&i<1000) 
	{	
		a=i/100;				//��i�İ�λ��ֵ��a
		b=i/10%10;				//��i��ʮλ��ֵ��b
		c=i%10;					//��i�ĸ�λ��ֵ��c 
	if (i==a*a*a+b*b*b+c*c*c)	//��iΪˮ�ɻ���ʱ��� 
	printf("%d\n",i);
	i=i+1;
	}	
} 
