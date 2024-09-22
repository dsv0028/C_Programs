#include<stdio.h>
int main()
{
     int a;
     printf("age of ram:");
     scanf("%d",&a);
     int b;
     printf("age of shyam:");
     scanf("%d",&b);
     int c;
     printf("age of ajay:");
     scanf("%d",&c);
     if(a<b && a<c){
        printf("ram is younger then shyam and ajay");
     }
     if(b<a && b<c){
        printf("shyam is younger then ram and ajay");
     }
     if(c<b && c<a){
        printf("ajay is younger then shyam and ram");
     }
    return 0;
}