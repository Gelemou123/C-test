#include <stdio.h>
int main()
{
	/*
	int i,j,x=0;
	for (i=0;i<3;i++)
	{
		if (i%3==2)break;
		x++;
		for (j=0;j<4;j++)
		{
			if (j%2==0)break;
			x++;
		}
		x++;
	}
	printf("%d\n",x);
	*/
	/*
	int x=2;
	do{
		printf("*");x--;
	}while(!x==0);
	*/
/*	int i,j;
	for (j=10;j<11;j++)
	{
		for (i=9;i==j-1;i++)
		printf("%d",j);
	}
*/
/*	char c;
	while ((c=getchar())!='?')
	putchar(++c);
*/
	/*int i,k=0,j;
	float l;
	for (i=1;i<=100;i++)
	{
		k+=i;
	}
	printf("1-100���ۼӺ�Ϊ:%d\n",k);		//1+..+100
	
	
	for (i=1;i<=50;i++)
	{
		k+=i*i;
	 } 
	 printf("ƽ�����50�ε���:%d\n",k);				//1*1+2*2+3*3..+50*50

	
	for (i=1;i<=10;i++)                
	{                                  
 		l+=1.0/i;                        
    }                                 
  printf("1+1/2+1/3+..+1/10=%f\n",l);*/
  
  /*int i=0,a=0;
  while (i<20)
  {
  	for( ; ;)
  	{
  		if ((i%10)==0)
  		break;
  		else i--;
	  }
	  i+=11;a+=i;	//1.i=11,a=11    2.i=21,a=32  ��18�� 
  }
  printf("%d\n",a);*/
  /*int a=0;
  while (a*a*a<=10) ++a;			//��21�� 
  printf("%d",a);*/
  
  
  
 /* int i=1,a=0,s=1;
  do{
  	a=a+s*i,s=-s,i++;	//1+-2+3-4+5-6+7-8+9-10  ��22�� 
  } while (i<=10);
  printf("%d",a);*/
  
  
  /*int x=-5;
  do{
  	printf("%d",x+=2);		//��23�� 
  } while(!(x++)); */
  
  
 /*int y,x;
  for (y=1,x=1;y<50;y++)
  {
  	if (x>=10)break;
  	if (x%2==1){x+=5;continue;} //��24�� 1.x=3 2.x=5 3.x=7 4.x=9 5.x=11   ���� 
  	x-=3;
	printf("%d",y);
  }*/
  
  
 int a,i;
  for (a=1,i=-2;i>=-1&&i<1;i++)
  {
  	a++;
	  printf("%d\n",a);
  }
}
