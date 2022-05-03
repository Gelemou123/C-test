#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int N;
    printf("N=:");
    scanf("%d",&N);
    int a[N][N];
    int i,j;
    printf("input a[N][N]:\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    int num=0;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            if(i==j||i+j==N-1)
            {
                num+=a[i][j];
            }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {   
            printf("%d/t",a[i][j]);
        }
        printf("/n");
    }
    printf("%d/n",num);
    return 0;
}


