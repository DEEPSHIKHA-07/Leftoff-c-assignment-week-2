#include<stdio.h>
int main()
{
    char word[30],i;
    printf("\nEnter a word:");
    gets(word);
    for(i=0;word[i] != '\0';i++);
    printf("\nLength of the word:%d",i);
    return 0;
}
