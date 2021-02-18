#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\nEnter the number of numbers you want to type:");
    scanf("%d",&n);
    int list[n];
    printf("\nEnter your numbers:");
    for(i=0;i<n;i++)
    {
        printf("\nElement number %d:",i+1);
        scanf("%d",&list[i]);
    }
    for(i=0;i<n;i++)
    if(((i+1)%2 == 0)||(list[i]%2 == 0))
    sum+=list[i];
    printf("\nSum of all even numbers as well  as numbers placed at even position is %d.",sum);
    return 0;
}
