#include <stdio.h>
int main()
{
char ch;
printf("请输入一个字母:");
scanf("%c",&ch);
if (65<=ch&&ch<=90)
{printf("转换后为:%c",ch+32);
}
else if (97<=ch&&ch<=122){
printf("转换后为:%c",ch-32);}
else printf("格式错误");
} 
