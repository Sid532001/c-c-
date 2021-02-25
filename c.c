
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int i,n;
    int a[20];
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = n; i >n; i--)
    {
        printf("%d", a[i]);
    }
    
    
    return 0;
}