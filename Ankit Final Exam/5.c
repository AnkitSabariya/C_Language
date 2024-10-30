#include <stdio.h>
int main()
{
    int user, new;
    int even = 0, odd = 0;
    printf("Enter a number :");
    scanf("%d", &user);
    while (user != 0)
    {
        new = user % 10;
        if (new % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        user = user / 10;
    }
    printf("Even digits: %d\nodd digit: %d\n", even, odd);
}
