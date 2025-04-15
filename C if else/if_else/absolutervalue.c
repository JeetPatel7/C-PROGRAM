#include<stdio.h>
int main()
{
    int n;
    printf("Enter interger:");
    scanf("%d",&n);

    if(n<0)
    {
        n = n*(-1);
    }
    printf("Absolute value is %d",n);
    
    return 0;
}