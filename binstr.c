#include<stdio.h>
int main()
{
    int n,count=0;
    int arr[10];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]=='1')
        count++;
    }
    return (count*(count-1))/2;
    
}