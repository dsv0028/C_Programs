#include<stdio.h>
int main()
{
    int max,min,n,a[n],i,j;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    max=min=a[0];
    for(j=0;j<n;j++)
    {
        if(a[j]>max)
        max=a[j];
        if(a[j]<min)
        min=a[j];
    }
    printf("%d %d",max,min);{
        return 0;
        
    }
    return 0;
}