#include<stdio.h>
int main(){
	char s[10][5]={
	"ling",	"yi",	"er",	"san",	"si",
	"wu",	"liu",	"qi",	"ba",	"jiu",
	};
	char a[20];		//���ַ������ʾ���������
	scanf("%s",a);
	int i=0;		//��������ѭ����i
	if(a[0]=='-'){	//�жϵ�һ���ַ��Ƿ�Ϊ����
		printf("fu ");	
		++i;		//��Ϊ������i��1��ʼѭ��
	}
	for( ; ;++i){
		int n=(int)a[i]-48;		//�ַ�ת����
		printf("%s",s[n]);		//�����Ӧ��ƴ��
		if(a[i+1]=='\0')break;
		printf(" ");   //�ж���һ���Ƿ�Ϊa�Ľ�β����������ѭ����β�޿ո�
	}
	return 0;
}

