#include<stdio.h>
int main(){
    for (int i = 1; i <=5; i++)
    {
        for (int space = i; space < 5; space++)
        {
            printf("  ");
        }
        
        for (int j = i; j >=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
}