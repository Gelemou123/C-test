#include<stdio.h>
int main()
{system ("color 02");
int a=0;
printf("������һ����λ��:",a);
scanf("\n%d",&a);
int b=a%10,c=a/10%10;
printf("%d+%d=%d",c,b,b+c);
}
