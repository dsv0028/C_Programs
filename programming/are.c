#include<stdio.h>
int main()
{
    int l;
    printf("Enter the length:");
    scanf("%d",&l);
    int b;
    printf("Enter the breadth:");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p){
    printf("Area is greater then perimeter");
    }
    else{
        printf("Area is not greater than perimeter");
    }
    return 0;
}