#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n=4;
    int z=1;
    int i,j,k;
    
    for(i=1;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=i;k>=-i;k--)
        {
            printf("%d",i-abs(k));
        }
        z+=2;
        printf("\n");
    }
    getch();
}