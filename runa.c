#include<stdio.h>
int main()
{
    int i,n;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    
        scanf("%d",&a[i]);
    
    for(i=1;i<n;i++)
    
        a[i]+=a[i-1];
         printf("%d",a[i]);
    
    return 0;
    
}