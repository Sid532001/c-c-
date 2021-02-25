#include<stdio.h>
int main()
{
    char a[50];
    int i,n;
    int count=0;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>65 && a[i]<='Z')
        count++;
    }
    printf("%d",&count);
    return 0;
}