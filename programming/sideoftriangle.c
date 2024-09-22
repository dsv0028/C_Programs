#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if ((a+b)>c && (b+c)>a && (c+a)>b){
    printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
    
    return 0;
}