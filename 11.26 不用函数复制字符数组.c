#include <stdio.h> 
#include <string.h>
int main()
{
	char ch[5]={"hello"},str[5];
	int i=0;
		for (i=0;ch[i]!='\0';i++) 
		{
//			str[i]=ch[i];
		}
		printf("ch=%s  %d\n",ch,strlen(ch));	
		printf("str=%s %d",str,strlen(str));
}
