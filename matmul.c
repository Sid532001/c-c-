#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k;
    int n;
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for (int  i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            c[i][j]=0;
            for (int k = 0; k < j; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
    for(i=0;i<n;i++)    
{    
for(j=0;j<n;j++)    
{    
printf("%d\t",c[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
    
    
    
