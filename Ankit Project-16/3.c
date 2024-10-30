#include<stdio.h>

int main(){
  

    for (int i = 5; i >=1; i--)
    { 
        for (int s = i; s > 1; s--)
        {
            printf("  ");
        }
         
        for (int j = i; j <= 5; j++)
        {
            printf("%d ",j);
           
            
            
        }
        printf("\n");
        
    }
    
}