#include<stdio.h>
int main()
{
    int a[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        printf("%d",a[i]);
    }
    return 0;
}