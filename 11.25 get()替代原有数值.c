#include <stdio.h>
#include <string.h>
int main()
{
	char ss[10] = "12345";
	gets(ss);				//�����12345 
	strcat(ss,"6789");
	printf("%s\n",ss);
	
}
