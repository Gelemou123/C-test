#include <stdio.h> 
int main()
{
 int i;
 float a1,a2;
 a1=3;
 for(i=1;i<=2019;i++)
 {
  a2=2/(2-a1);
  a1=a2;
 }
 printf("µÚ2019ÏîÊÇ%5.2f",a2);
 
}
