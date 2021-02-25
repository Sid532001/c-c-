#include<stdio.h>
int main(){
int n,i;
int a[1000];
int count=0;
 scanf("%d",&n);
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
	if(a[i]=='\0')
	count++;
}
printf("%d",count);
return 0;
}
