#include<stdio.h>
int main()
{
    int n;
    printf("Enter +ve integer:");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }

    return 0;
}