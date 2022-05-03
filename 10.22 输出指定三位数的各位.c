#include<stdio.h>
int main ()
{system ("color 02");
int a=123,b,c,d;
b=a/100,c=a/10%10,d=a%10;
printf("这个三位数是:%d\n百位是:%d\n十位是:%d\n个位是:%d",a,b,c,d);
}
