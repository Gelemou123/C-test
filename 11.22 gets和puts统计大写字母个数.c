#include <stdio.h>
int main()
{
	char a[6];
	gets(a);
	if (a[5]>='A'&&a[5]<='Z')
	{
		printf("��д��ĸ��:%d\n",sizeof(a));
		}	
		if (a[5]>='a'&&a[5]<='z')
	{
		printf("Сд��ĸ��:%d\n",sizeof(a));	//printf("%d",strlen(ch));  strlen��ȥ��\0,�ַ�����\0���� 
	}
	puts(a);
}
