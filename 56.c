#include<stdio.h>
void main()
{
    char a;
    int b,i;
    printf("enter the string");
    scanf("%s%d",&a,&b);
    if((a>'a')&&(a<'z')||(a>'A')&&(a<'Z')||(b>1)&&(b<9))
    {
        printf("yes \n");
    }
    else
    {
        printf("no \n");
    }
    
}
