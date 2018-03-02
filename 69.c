#include<stdio.h>
void main()
{
    int a,b,diff;
    scanf("%d %d",&a,&b);
    printf("enter the number \n");
    diff=a-b;
    if(diff%2==0)
    {
        printf("even number \n");
    }
    else
    {
        printf("odd number \n");
    }
}
