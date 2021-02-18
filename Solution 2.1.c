#include<stdio.h>
int main()
{
    int n,sum = 0;
    printf("\nEnter a number:");
    scanf("%d",&n);
    for(;n!=0;n=n/10)
    sum+=n%10;
    printf("\nSum of all digits:%d",sum);
    return 0;
}
