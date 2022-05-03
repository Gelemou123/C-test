#include <stdio.h>
void func(int n)
{
	int i;
	long long s=1;
	for (i=1;i<=n;i++)
	{
		s*=i;
	}
		printf("%lld",s);	
}

int main()
{
	 long n,i,s;
	scanf("%d",&n);
	func(n);
}
