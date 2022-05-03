#include <stdio.h>
#include <string.h>
 
void main() {
    char *s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i] = new char[255];
        printf("输入第%d个:", i + 1);
        scanf("%s", s[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) < 0) {
                char *p = s[i];
                s[i] = s[j];
                s[j] = p;
            }
 
        }
    }
    printf("\n降序排列后的字符串序列:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
        delete[] s[i];
    }
}
