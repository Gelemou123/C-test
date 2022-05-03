#include <stdio.h>
/*int f(int n)
{
	int result;
	if (n==0)
	result=1;
	else if (n>0)
	result=n*f(n-1);
	return result;
}

int main()					//n的阶乘 
{	int n;
	int result;
	scanf("%d",&n);
	printf("%d",f(n));
}*/


/*int fb(int n)
{
	int i,num;
	for(i=1;i<=20;i++)
	{
		if (n==0)
		num=0;
		else if (n==1)
		num=1;
		else if (n>=2)
		num=fb(n-1)+fb(n-2);
	}
	return num;
 } 
int main()
{
	int n;
	int num;
	int i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%3d\t",fb(i));
	}
	return 0;
}*/


void exchange(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
 
int main()
{
	int a;
	int b;
	scanf("%d %d",&a,&b);
	printf("转换前:a=%d,b=%d\n",a,b);
	exchange(&a,&b);
	printf("转换后:a=%d,b=%d\n",a,b);
	return 0;
}

 


 
