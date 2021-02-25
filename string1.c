#include<stdio.h>
int main()
{
    int i,L,R,n;
    char ar[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",ar[i]);
    }
    scanf("%d",&L);
    scanf("%d",&R);
    for(i=L;i<=R;i++)
    printf("%s",ar[i]);
    return 0;
}