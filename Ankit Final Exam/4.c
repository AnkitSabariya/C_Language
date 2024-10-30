#include<stdio.h>
int main(){
    int user;
    printf("Enter number of rows : ");
    scanf("%d",&user);

    for (int i = user; i >= 1; i--)
    {
     for (int j = 1; j <= i; j++)
     {
        printf("%d ",i);
        
     }
     printf("\n");
     
    }
    
    
}