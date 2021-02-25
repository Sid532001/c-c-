#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    scanf("%d",&k);
    char a[50];
    char b[50];
    for (int i = 0; i < n; i++)
    {
        scanf("%c",&a[i]);
    }
    for (int j = 0; j < k; j++)
    {
        scanf("%c",&b[j]);
    }
    for (int i = 0; i < n; i++)
    for (int j = 0; j < k; j++)
    if (a[i]!=b[j])
    {
        printf("%d",a[i]);
    }
    return 0;

    
}
    
    
    
