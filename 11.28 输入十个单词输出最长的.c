#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr[1024] = {0};
    char brr[50] = {0};

    puts("������");
    scanf("%[^\n]",arr);

    int i,j;
    int n,m = 0;// n ��ǵ���β��m��ǵ���ͷ,�����ʼ m = 0;
    int len = strlen(arr);
    int b_len = 0;// ���ñȽ�ֵ

    for(i = 0;i < len;i++)
    {
        if(arr[i] == ' ' || i == len - 1)
        {
            n = i;
            if(n - m > b_len)
            {
                b_len = n - m;
                int k = 0;
                memset(brr,0,50);//���ҵ������ǰÿ�����㣬��ֹ�ڴ�й©
                for(j = m;j < n;j++)
                {
                    brr[k++] = arr[j];
                }
                if(i == len - 1)
                {
                    brr[k++] = arr[len - 1];
                }
            }
            m = i + 1;//i == ' 'ʱ��i + 1 ��ʾ��һ������ͷ
        }
    }
    puts("����ʣ�");
    printf("%s\n",brr);
    return 0;
}

