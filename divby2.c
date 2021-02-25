#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,temp;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    temp=arr[i]%2;
    if(temp==0)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
