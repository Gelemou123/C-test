#include <stdio.h>

void func(int n)
{
	int i,s=1;
	for (i=1;i<=n;i++)
	{
		s*=i;
	}
	printf("%dµÄ½×³Ë=%d",n,s);
}
int main()
{
	int n;
	scanf("%d",&n);
	func(n);
}

/*void max(int num1,int num2)
{
	if (num1>num2)
	{
		printf("%d",num1); 
	}
	else {printf("%d",num2);}
}
int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	max(num1,num2);	
} */





