#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter c:");
    scanf("%d",&c);

    if(a>=b && a>=c)
    {
        printf("a is greatest");
    }

    else if(b>=a && b>=c)
    {
        printf("b is greatest");
    }

    else
    {
        printf("c is greatest");
    }

    return 0;

}