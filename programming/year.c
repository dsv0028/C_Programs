#include<stdio.h>
int main()
{
    int n;
    printf("Enter a year");
    scanf("%d",n);
    if(n%4==0){
        printf("Leap year");
    }
    if(n%4!=0){
        printf("Not a leap year");
    }
    return 0;
}