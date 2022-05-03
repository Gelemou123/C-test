#include<stdio.h>
int main()
{system("color 02");
int a=234,b=a/10,c=a%10;		
printf("百位是:%d\n十位是:%d\n个位是:%d\n累加和为:%d",c,b%10,b/10,c+b%10+b/10);

}

