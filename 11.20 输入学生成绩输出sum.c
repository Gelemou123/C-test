#include <stdio.h>
int main()
{
	int i,n,a[n],sum=0,temp,j;
	printf("一共有多少名同学的成绩？:\n");
	scanf("%d",&n);							//一共有n名同学 
	printf("请输入这%d名同学的成绩:\n",n);
	for (i=0;i<=n-1;i++)				//由于i=0，循环执行n-1次 
	{
		scanf("%d",&a[i]);				//从键盘输入数据给数组中的元素 
		printf("第%d名的成绩为:%d\n",i+1,a[i]);	
		sum+=a[i];						//求出总分sum 
	}
	printf("第一名的成绩是:%d\n",a[0]);	//输出第一名 
	printf("第五名的成绩是:%d\n",a[4]);	//输出第五名 
	printf("总分为:%d\n平均分为:%d",sum,sum/n);	//输出总分和平均分 
	for (i=0;i<n-1;i++)				//循环n-1次 
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
	printf("最小值为%d,最大值为%d",a[0],a[n]);
	
 } 
