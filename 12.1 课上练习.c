#include <stdio.h>

/*void func(int n)
{
	int i,s=1;
	for (i=1;i<=n;i++)
	{
		s*=i;
	}
	printf("%d的阶乘=%d",n,s);		//n的阶乘 
}
int main()
{
	int n;
	scanf("%d",&n);
	func(n);
}*/




/*void max(int num1,int num2)
{
	if (num1>num2)
	{
		printf("%d",num1); 
	}
	else {printf("%d",num2);}	//比较两个数的大小 
}
int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	max(num1,num2);	
} */



/*void exchange(int x,int y)
{
	int temp;
	temp=x;x=y;y=temp;
	printf("%d %d",x,y);
}
int main()					//交换两个数，并输出，在主函数测试 
{
	int x,y,temp;
	scanf("%d %d",&x,&y);
	exchange (x,y);
}*/



/*void exchange(int x,int y)
{
	int temp;
	temp=x;x=y;y=temp;
}
int main()						//交换两个数，并在主函数测试 
{
	int x,y,temp;
	scanf("%d %d",&x,&y);
	printf("%d %d",y,x);
}*/
/*void subsum(int a,int b)
{
	int s=0,i;
	for (i=a;i<=b;i++)
	{
		s+=i;					//求区间[a,b]的所有整数之和 
	}
	printf("%d",s);
}
int main()
{
	int a,b,i=0;
	scanf("%d %d",&a,&b);
	subsum(a,b);
}*/

void sum(int a,int b)
{	a=1,b=100;
	int s=0;
	for (a=1;a<=b;a++)
	{
		s+=a;
	}
	printf("%d",s);
 } 
int main()
{
	int a,b,s;
	sum(a,b);
}


