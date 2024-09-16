#include<stdio.h>

int main(){
int n;
printf("enter the value of n:");
scanf("%d",&n);

for (int  i = 0; i <=n; i++){
    if (i % 2 == 0)           
    {
        printf(" print even number is i %d\n",i);
    }
   
    
    
}

return 0;
}