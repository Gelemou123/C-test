#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr[1024] = {0};
    char brr[50] = {0};

    puts("请输入");
    scanf("%[^\n]",arr);

    int i,j;
    int n,m = 0;// n 标记单词尾，m标记单词头,必须初始 m = 0;
    int len = strlen(arr);
    int b_len = 0;// 设置比较值

    for(i = 0;i < len;i++)
    {
        if(arr[i] == ' ' || i == len - 1)
        {
            n = i;
            if(n - m > b_len)
            {
                b_len = n - m;
                int k = 0;
                memset(brr,0,50);//在找到最长单词前每次清零，防止内存泄漏
                for(j = m;j < n;j++)
                {
                    brr[k++] = arr[j];
                }
                if(i == len - 1)
                {
                    brr[k++] = arr[len - 1];
                }
            }
            m = i + 1;//i == ' '时，i + 1 表示下一个单词头
        }
    }
    puts("最长单词：");
    printf("%s\n",brr);
    return 0;
}

