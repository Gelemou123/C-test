#include<stdio.h>
int main(){
	char s[10][5]={
	"ling",	"yi",	"er",	"san",	"si",
	"wu",	"liu",	"qi",	"ba",	"jiu",
	};
	char a[20];		//用字符数组表示输入的整数
	scanf("%s",a);
	int i=0;		//定义用来循环的i
	if(a[0]=='-'){	//判断第一个字符是否为负号
		printf("fu ");	
		++i;		//若为负数则i从1开始循环
	}
	for( ; ;++i){
		int n=(int)a[i]-48;		//字符转数字
		printf("%s",s[n]);		//输出对应的拼音
		if(a[i+1]=='\0')break;
		printf(" ");   //判断下一个是否为a的结尾，是则跳出循环结尾无空格
	}
	return 0;
}

