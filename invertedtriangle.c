#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
