#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int userInput;

    printf("\n Enter a number");
    scanf("%d",userInput);

    if (userInput < 0)
    {
        printf("\n Warning: the Entered no. is negative");
        
    }
    else
    {
        printf("\n ");
    }
    
    bool Even = (userInput % 2 == 0)? true:false;
    if (Even)
    {
        printf("\n %d is Even",userInput);
    }
    else
    {
        printf("\n %d is Odd",userInput);
    }
    return 0;
    
}