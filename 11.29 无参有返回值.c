#include <stdio.h>
int func()
{
	int x,y,i,s=1;
	scanf("%d %d",&x,&y);
	for (i=1;i<=y;i++)
	{
		s*=x;
	}
	return s;
}




int n()
{
	int i,s=1;
	for (i=1;i<=6;i++)
	{
		s*=i;			//6�Ľ׳� 
	}
	return s;
}

int max()
{
	int a,b,x;
	scanf("%d %d",&a,&b);	//�ж������������Ĵ�С 
	x=(a>b?a:b);
	return x;	
}

int eggs()
{
	int i;
	for (i=1;i<=100;i++)
	{
		if (i%2==1&&i%3==2&&i%5==4)//�������� 
		{
			return i;
		}
	}		
}


int sum()
{
	int i,sum=0;
	for (i=1;i<=100;i++)	//һ��һ���ۼӺ� 
	{
		sum+=i;
	}
	return sum;
}


int main()
{
	printf("%d\n",sum());
	printf("%d\n",eggs());
	printf("%d\n",max());
	printf("%d\n",n());
	printf("%d\n",func());
 } 
