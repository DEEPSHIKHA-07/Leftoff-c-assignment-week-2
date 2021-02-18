#include<stdio.h>
int main()
{
    int n,i,min,max;
    printf("\nEnter the number of numbers you want to enter:");
    scanf("%d",&n);
    int list[n];
    printf("\nEnter your numbers:");
    for(i=0;i<n;i++)
    {
        printf("\nElement number %d:",i+1);
        scanf("%d",&list[i]);
    }
    max=min=list[0];
    for(i=1;i<n;i++)
    {
        if(list[i]<min)
        min = list[i];
        if(list[i]>max)
        max = list[i];
    }
    printf("\nMaximum number:%d",max);
    printf("\nMinimum number:%d",min);
    return 0;
}
