#include <stdio.h>
int main()
{
char ctype;
printf("�������������:");
ctype=getchar(); 
if (ctype>='a'&&ctype<='z')
ctype=ctype-32;
switch (ctype)
	{case 'A':printf("�ɼ�ʻ��ͳ�������С�γ�");break;
	 case 'B':printf("�ɼ�ʻ������С�γ�");break;
	 case 'C':printf("�ɼ�ʻС�γ�");break;
	 case 'D':printf("�ɼ�ʻĦ�г�");break;
	 default:printf("��ʽ����");
	}
return 0;
}
