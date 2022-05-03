#include <stdio.h>
int main()
{
int n=1308,s=0;
s=s+n%10;
n=n/10;
printf("%d,%d",s,n);
 } 
