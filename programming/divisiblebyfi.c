#include<stdio.h>
int main(){
int n;
printf("enter a number:");
scanf("%d",&n);
// if(n%5 || n%3){
//     if(n%15!=0){
//     printf("the number is divisible by 5 or 3 but not 15");
//     }
//     else{
//         printf("the number is divisible by 15");
//     }
// }
if((n%5==0 || n%3==0) && n%15!=0){
    printf("the number is not divisible 5 or 3 but not fifteen");
}
else{
    printf("the number is not matching the required condition");
}


return 0;
}