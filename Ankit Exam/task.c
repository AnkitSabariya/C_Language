#include <stdio.h>
int main()
{
    int user, first, second;

    printf("press 1 for Addition\n");
    printf("press 2 for Subtraction\n");
    printf("press 3 for Multiplication\n");
    printf("press 4 for Division\n");
    

    printf("Select Operation no. ");
    scanf("%d",&user);
      if (user > 0 && user <= 4)
    {
        printf("Enter the first velue : ");
        scanf("%d", &first);
        printf("Enter the second velue : ");
        scanf("%d", &second);
    }

   

    switch (user)
    {
    case 1:
        printf("Addition = %d", first + second);
        break;
    case 2:
        printf("Subtraction = %d", first - second);
        break;
    case 3:
        printf(" Multiplication = %d", first * second);
        break;
    case 4:
        printf("Subtraction = %d", first / second);
        break;

    default:
        printf("exit");
        break;
    }
}