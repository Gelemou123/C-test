#include <stdio.h>
int main()
{
char ch;
printf("������һ����ĸ:");
scanf("%c",&ch);
if (65<=ch&&ch<=90)
{printf("ת����Ϊ:%c",ch+32);
}
else if (97<=ch&&ch<=122){
printf("ת����Ϊ:%c",ch-32);}
else printf("��ʽ����");
} 
