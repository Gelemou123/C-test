#include <stdio.h>
int main()
{
	

    int i,j,temp;  	//i是循环次数 
  	int a[10];
    for (i=0;i<=9;i++)
    {
    	scanf("%d",&a[i]);		//输入十个数据 
	}
	for (i=0;i<=9;i++) 			//循环十次 
    {	
        for (j=0;j<9-i;j++)  	//第一冒泡比较九次，然后每回冒泡少一次比较，因为最小的被放在最后 
        {
            if (a[j]<a[j+1])	//如果a[0]<a[1]，就交换 
            {
                temp=a[j];		
                a[j]=a[j+1];
                a[j+1]=temp;	//用中间值进行交换 
            }
        }
    }
    for (i=0; i<=9; ++i)		//输出十次结果 
    {
        printf("%5d",a[i]);
    }
    printf("\n");
    return 0;
 
}

