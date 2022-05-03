#include <stdio.h>
int main()
{
	char a[6];
	gets(a);
	if (a[5]>='A'&&a[5]<='Z')
	{
		printf("´óÐ´×ÖÄ¸ÓÐ:%d\n",sizeof(a));
		}	
		if (a[5]>='a'&&a[5]<='z')
	{
		printf("Ð¡Ð´×ÖÄ¸ÓÐ:%d\n",sizeof(a));	//printf("%d",strlen(ch));  strlenÄÜÈ¥µô\0,×Ö·û´®Óö\0½áÊø 
	}
	puts(a);
}
