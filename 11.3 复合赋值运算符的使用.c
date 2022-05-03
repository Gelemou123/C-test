#include <stdio.h>
int main()
{
int a=11,b=11;
a+=b-=a/=b*=3;
printf("a=%d,b=%d",a,b);
 } 
