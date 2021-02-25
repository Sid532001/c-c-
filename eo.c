#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    if(n&1==1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    
   
    return 0;
}
