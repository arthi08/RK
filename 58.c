#include<stdio.h>
void swap(int a,int b);
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    
}
void swap(int x,int y)
{


    x=x^y;
    y=x^y;
    x=x^y;
    printf("the swappimg 2 numbers are %d and %d",x,y);
    
}
