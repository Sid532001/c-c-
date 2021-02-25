#include <stdio.h>
int main() {
int t,n;
scanf("%d",&t);
while(t--){
int a,b=1;
scanf("%d",&n);
while(n--){
scanf("%d",&a);
if(a==0){
b=a;
}
}
printf("%d\n",b);
}
return 0;
}