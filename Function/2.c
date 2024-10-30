#include <stdio.h>

int divisible()
{
    int user;

    printf("enter the velue = ");
    scanf("%d", &user);
    if (user % 3 == 0 && user % 5 == 0)
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
    {
        printf("False");
    }
}

int main()
{
    divisible();
}