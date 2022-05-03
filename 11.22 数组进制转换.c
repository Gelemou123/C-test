#include <stdio.h>
int main()
{
	int num;
	int  a[8]={0},temp,hex,i=0;
		scanf("%d %d",&num,&hex);
		temp=num;
		while (temp)
		{
			a[i]=temp%hex;
			temp=temp/hex;
			i++;
		}
		for (i=8-1;i>=0;i--)
		{
			printf("%d",a[i]);
		}		
		
}
