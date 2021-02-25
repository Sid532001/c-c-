#include<stdio.h>
int main(int argc, char const *argv[])
{
   int a[10];
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(int i=0;i<n-1;++i)
   {
     for(int j=0;j<n-1;++j)
     {
     if(a[j]>a[j+1])
     {
         int temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;

     }
   }
   }
   for (int i = 0; i < 2; i++)
   
   printf("%d",a[0]);


    return 0;
}
