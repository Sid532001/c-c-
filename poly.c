#include <stdio.h>

int main() {
int i,sum=1;
int a[3];
int n;
scanf("%d",&n);
for(i=0;i<3;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
sum=sum+a[i];
}
if(sum%3==0)
{
	printf("no\n");
}
else
{
	printf("yes\n");
}


	return 0;
}