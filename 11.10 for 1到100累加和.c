#include <stdio.h>
int main()
{
/*	int i=1,a=0;
		while (i<=100)
			{
				a=a+i;
				i=i+1;
			}
	printf("%d",a);*/
/*	int i=1,a=0;
	do{
		a=a+i;
		i=i+1;
		
	}while (i<=100);
	printf("%d",a);*/
	int i,a;
	for(i=1,a=0;i<=100;i=i+1)//for(变量的初始化;循环条件;变量的自增自减) 
		{
			a=a+i;	
		}	
 	printf("%d",a);
 } 
