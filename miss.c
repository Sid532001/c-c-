#include<stdio.h>
int main()
{

    int sum=0;
    int n,i;
    int son=0;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum+=a[i];
    son=(n*(n+1))/2;
    int missing=son-sum;
    printf("%d",missing);
    return 0;
}