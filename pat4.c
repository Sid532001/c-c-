#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}