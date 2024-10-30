#include<stdio.h>
int main(){
    for (int i = 1; i <=5; i++)
    {
        for (int space = i; space > 1; space--)
        {
            printf("  ");
        }
        
        for (int j = 5; j >=i; j--)
        {
            
                printf("%d ",j);
           
            
        }
        printf("\n");
        
    }
    
}