#include <stdio.h>

int user()
{
    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for purcentage\n");
    printf("Press 0 for the exit\n");

    int user, first, second;

    printf("Enter case no.");
    scanf("%d", &user);

    if (user > 0 && user <= 5)
    {
        printf("Enter the first velue : ");
        scanf("%d", &first);
        printf("Enter the second velue : ");
        scanf("%d", &second);
    }

    switch (user)
    {
    case 1:
        printf("sum ans = %d", (first + second));
        break;
    case 2:
        printf("Minus = %d", (first - second));
        break;
    case 3:
        printf("Multiplied ans = %d", (first * second));
        break;
    case 4:
        printf("Divided ans = %.2f", ((float)first / second));
        break;
    case 5:
        printf("Mode ans = %d", (first % second));
        break;
    default:
        printf("the exit");
        break;
    }
}

int main()
{
    user();
}


