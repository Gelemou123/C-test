#include <stdio.h>
#define PI 3.14
	/*int num;
	scanf("%d",&num);			//��һ�⣬����һ��ʮ��������ת��Ϊ��Ӧ�İ˽��ƺ�ʮ�������� 
	printf("�˽�����:%o ʮ��������:%x",num,num);*/
	
	
	/*int num1,num2;
	scanf("%d %d",&num1,&num2);
	if (num1>num2)
	{
		printf("���ֵΪ:%d����СֵΪ:%d",num1,num2);		//�ڶ��⣬������������������ֵ����Сֵ 
	}
	if (num1<num2)
	{
		printf("���ֵΪ:%d����СֵΪ:%d",num2,num1);
	}*/
	
	
	/*float r,pri,area;
	scanf("%f",&r);											//�����⣬����뾶����Բ���ܳ������ 
	pri=2*PI*r;
	area=PI*r*r; 
	printf("�뾶Ϊ:%.2f��Բ���ܳ�Ϊ:%.2f,���Ϊ:%.2f",r,pri,area);*/
	
	
	
	/*int x;
	scanf("%d",&x);
	if (x<1)
	{
		printf("y=%d",x);
	}
	if (x>=1&&x<10)
	{
		printf("y=%d",2*x-1);								//�����⣬����x��ֵ�����Ӧy��ֵ 
	}
	if (x>=10)
	{
		printf("y=%d",3*x-11);
	}*/
	
	
	
	
	/*int rank;
	scanf("%d",&rank);
	if (rank>=90&&rank<=100)
	{
		printf("A");
	}
	if (rank>=80&&rank<90)
	{
		printf("B");
	}
	if (rank>=70&&rank<80)
	{
		printf("C");
	}
	if (rank>=60&&rank<70)
	{
		printf("D");
	}
	if (rank>=0&&rank<60)
	{
		printf("E"); 
	}
	
	if (rank>100)
		{
			printf("�������");					//�����⣬�����ɼ������Ӧ�ȼ�����if��switch�ֱ�ʵ�� 
			return;
		 } 
	switch (rank/10)
	{
		
		case 10:case 9:printf("A");break;
		case 8:printf("B");break;
		case 7:printf("C");break;
		case 6:printf("D");break;
		case 0:case 1:case 2:case 3:case 4:case 5:printf("E");break;
		default :printf("�������");
	}*/
	
	
	
	/*int i,hang=0;
	for (i=1;i<=100;i++)
	{
		
		if (i%7==0)
		{
			hang++;
			printf("%4d",i);			//�����⣬���1-100���ܱ�7����������ÿ�����7���� 
		
			if (hang%7==0)
			{
				printf("\n");
			}
		}
			
	} */
	 
	 
	  
	/*int i,h,sum=0;
	for (i=1;i<=100;i++)
	{
		if (i%7==0)						�����⣬1-100�ܱ�7�����������ۼӺ� 
		{
			sum+=i;		
		}
	}	
	printf("%d",sum);*/
		
		
		
	/*int i,j;
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=i;j++)					//�ڰ��⣬�žų˷��� 
		{
			printf("%d*%d=%d\t",j,i,i*j);
		}		
		printf("\n");
	}*/
	

/*int a[3];
int i;
for (i=0;i<=2;i++)
{
	scanf("%d",&a[i]);						//�ھ��⣬�������һ����λ�� 
}
for (i=2;i>=0;i--)
{
	printf("%d",a[i]);
}*/


/*int num,a,b,c;
scanf("%d",&num);
a=num/100;
b=num/10%10;
c=num%10;
if (a*a*a+b*b*b+c*c*c==num)					//��ʮ�⣬����������λ�������ж��Ƿ�Ϊˮ�ɻ��� 
{
	printf("%d��ˮ�ɻ���",num); 
}
else printf("%d����ˮ�ɻ���",num);*/
		
		
		
/*int i,num,a,b,c;		

for (i=1;i<=1000;i++)
{
	a=i/100;
	b=i/10%10;
	c=i%10;	
	if (a*a*a+b*b*b+c*c*c==i)			//��ʮһ�� ,�������ˮ�ɻ��� 
	{
		printf("%5d",i);
	}
}*/


/*int a[10];
int i,j,temp;
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (j=9;j>=0;j--)				//��ʮ���� ������ʮ������Ȼ��������� 
	{
		printf("%5d",a[j]);
	}*/


/*int num1=0,num2=1,num3,i;
for (i=1;i<=20;i++)
{
	num3=num1+num2;
	num1=num2;					//��ʮ���⣬���쳲���������ǰ��ʮ�� 
	num2=num3;
	printf("%5d",num1);
}*/

/*int a[5];
int i,j,temp;
for (i=0;i<5;i++)
{
	scanf("%d",&a[i]);
	for (j=0;j<5-i-1;j++)
	{
		if (a[j]<a[j+1])				//��ʮ���⣬��ð�����������/�������� 
		{
			temp=a[j];a[j]=a[j+1];a[j+1]=temp;
		}
	}
	printf("%5d",a[i]);
}*/


/*int i,j,a[15],temp,sum=0;
for (i=0;i<15;i++)
{
	scanf("%d",&a[i]);
	if (a[i]>100&&a[i]<0)
	{
		printf("�������");
	}
}
for (i=0;i<15;i++)						//��ʮ���⣬��15λѧ���ɼ�����߷֣���ͷֺ�ƽ���� 
{
	for (j=0;j<15;j++)
	{
		if (a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("��߷�:%d",a[j]);
printf("��ͷ�:%d",a[1]);
for (i=0;i<15;i++)
{
	sum+=a[i];
}
printf("ƽ����%.d",sum/15);
*/ 
	
	
/*char a[20];
int i,num=0;
for (i=0;i<20;i++)
{
	scanf("%c",&a[i]);
	if (a[i]>='a'&&a[i]<='z')			//��ʮ���⣬�����ַ���ͳ��Сд��ĸ�ĸ��� 
	{
		num++;
	}
}
printf("%s�й���%d��Сд��ĸ",a,num);
*/
	
	
/*void as(char a[])
{
	int i,num=0;
	for (i=0;a[i]!='\0';i++)
	{
			if (a[i]>='a'&&a[i]<='z')			//��ʮ���⣬��дһ����������ʵ�δ���һ���ַ�����ͳ��Сд��ĸ���� 
			{
				num++;
			}
	}
	printf("%d",num);
}
int main()
{
	int num,i;
	char b[10];
	gets(b);
	as(b);
}*/



/*void run(int year)
{
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("%d��������\n",year);			//��ʮ���⣬ ������ݺ��·ݣ������Ӧ���� 
	}	
}

int main()
{
	int year,sum=0,day,month;
	run(year);
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	switch (month)
	{
		case 1:sum=day;
		case 2:sum+=day+31;
		case 3:if(year%4==0)
			{
				sum+=29;
			}
			else if (sum+=28)x;
		case 4:sum+=31;
		case 5:sum+=30;
		case 6:sum+=31;
		case 7:sum+=30;
		case 8:sum+=31;
		case 9:sum+=31;
		case 10:sum+=30;
		case 11:sum+=31;
		case 12:sum+=30;
	}
	printf("%d��%d�¹���%d��",year,month,sum);
}*/
	
	
	
/*void sushu(int num)
{
	int i;
	for (i=2;i<num;i++)
	{
		if (num%i!=0)
		{
			printf("%d������",num);break;
		}
		else printf("��������"); break;			//��ʮ���⣬�ж������ĺ������������������������� 
	}
}

int main()
{
	int num,i;
	
	scanf("%d",&num);
	sushu(num);
}*/
	
/*void shu(int a[])
{
	int i,sum=0;
	for (i=0;i<10;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);				//�ڶ�ʮ�⣬��ʵ�δ���һ���������飬��������Ԫ��֮�ͣ����������в��� 
}

int main()
{
	int i,sum,b[10];
	for (i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	shu(b);
}*/
	
	
	
/*void shu(int n)
{
	if (n>1)
	{
		shu(n/2);
	}
	printf("%d",n%2);			//�ڶ�ʮһ�⣬��ʵ�δ�����ʮ������ת��Ϊ�����ƣ��������������� 
}	
int main()
{
	int a;
	scanf("%d",&a);
	shu(a);
	printf("\n");
}*/
	
