#include <stdio.h>
void  fb(int n)
{	int a,b,c;
	int i;
	a=0,b=1;
	for (i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",a);
	}
	
	
}
int main()
{
	int a,b,c,i,n;
	scanf("%d",&n);
	fb(n);
}
