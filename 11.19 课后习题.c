#include <stdio.h>
int main()
{
	/*int i;
	for (i=100;i>=0;i-=10);
		printf("%5d",i);*/
		/*int a=0,i=0;
		while (a<=6)
		{
			++i;
			a+=i;    //33题 1.i=1 a=1  2.i=2,a=3  3.i=3 a=6 4.i=4 a=10 
		}
	printf("%d",a);*/
			
		/*	int a,s,n,count;
			a=2,s=0,n=1,count=1;
			while (count<=7)
			{							/*34题   1.n=2 s=2  2.n=4 s=6 3.n=8 s=14 4.n=16 s=30 5.n=32 s=62 
											6.n=64 s=126 7.n=128 s=254 
				n=n*a;s=s+n;++count;
			}
			printf("%d",s);*/
			
			
	/*int k=1,n=263;
	do{
		k*=n%10;n/=10;	//35题  1.k=3 n=26 2.k=18 n=2 3.k=36 n=0
	}while (n);
	printf("%d",k);*/
	
	
	int a=0,i=0;
	do{
		++i;a+=i;
	}while (a<=6);	//36题   1.a=1 2.a=3 3.a=6 4.a=10 
	printf("%d",a);
}
