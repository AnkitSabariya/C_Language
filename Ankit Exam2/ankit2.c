#include<stdio.h>
int main(){
    int user;
    printf("Enter number of rows :");
    scanf("%d",&user);

    for (int i = 1; i <= user; i++)
    {
        for (int j = user; j >= user+1-i; j--)
        {
            printf("%d ",j);
        
        }
        printf("\n");
        
    }
    
}