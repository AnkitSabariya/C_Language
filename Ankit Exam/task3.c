#include<stdio.h>
int main(){

    printf("Marks >= 85 : Grade A\n");
    printf("Marks >= 70 : Grade B\n");
    printf("Marks >= 50 : Grade C\n");
    printf("Marks <  50 : Grade D\n");
    int user;
    printf("Enter the Marks :");
    scanf("%d",&user);
    if (user <= 0 || user >=100)
    {
        printf("You are fail");
    }
    else if (user >=85)
    {
       printf("Grade A");
    }
    else if(user >=70){
        printf("Grade B");

    }
    else if(user >=50){
        printf("Grade C");

    }
    else{
       printf("Grade D");

    }

}