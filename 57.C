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
int z;
z=x;
x=y;
y=t;
printf("the swapping 2 numbers are %d and %d",x,y,z);
}
