#include<stdio.h>
int main(){
int n;
printf("enter positive integer");
scanf("%d",&n);
if(n%5 && n%3){
    printf("integer is divisible by 5 and 3");
}
else{
    printf("integer is not divisible by 5 and 3");
}


return 0;
}