#include<stdio.h>
int main()
{
    int arr[100];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]!=arr[i+1])
        {
            printf("%d",&arr[i]);
           
        }
    }
    printf("\n");
    return 0;
}
