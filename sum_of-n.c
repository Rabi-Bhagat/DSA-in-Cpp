#include<stdio.h>

int main(){
int n,sum = 0;
printf("enter the value of n:");
scanf("%d",&n);

for (int  i = 0; i <=n; i++){
    sum = sum +i;
}
printf("sum is %d",sum);
return 0;
}