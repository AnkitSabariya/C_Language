#include <stdio.h>
int main()
{
    int num;
    printf("Enter a numbers : ");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
          printf("The number is Even");
    }
    else{
         printf("The number is Odd");
    } 
}