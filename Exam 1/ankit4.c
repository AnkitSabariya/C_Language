#include<stdio.h>

int main(){

    int user,user2;

    printf("press 1 for English.\n ");
    printf("press 2 for Hindi.\n ");
    printf("press 3 for Gujarati \n");

    printf("enter your no. => ");
    scanf("%d",&user);

    switch (user)
    {
    case 1:
        printf("Press 1 to check account balance\n");
         printf("Press 2 to transfer funds\n");
        printf("Press 3 to view recent transactions\n");
        break;
    case 2:
        printf("Top-up 1recharge option is not implemented yet.\n");
         printf("Top-up 2  recharge option is  implemented yet.\n");
        printf("press 3 other\n");
        break;
    case 3:
        printf("press 1 for internet recharge\n");
        printf("press 2 for top-up recharge\n");
        printf("press 3 for special recharge\n");
        break;
    
    default:
        break;
    }

    printf("enter your no. => ");
    scanf("%d",&user2);

    switch (user2)
    {
    case 1:
        printf("you have successfully");
        break;
    case 2:
        printf("you have lots of fun");
        break;
    case 3:
        printf("your welcom");
        break;
    
    default:
        break;
    }
}