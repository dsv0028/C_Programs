#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c){
    printf("a is greater then b and c");
    }
    if (b>a && b>c){
    printf("b is greater then a and c");
    }
    if (c>b && c>a){
    printf("c is greater then b and a");
    }
    return 0;
}