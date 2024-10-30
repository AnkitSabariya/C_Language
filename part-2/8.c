#include<stdio.h>
int main(){
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5+1-i; j++)
        {
            
                printf("%d ",j);
           
            
        }
        for (int s = i; s >1; s--)
        {
            printf("    ",s);
        }
        
      for (int j = 5+1-i; j >=1; j--)
        {
            
                printf("%d ",j);
           
            
        }
        printf("\n");    
}
   for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            
                printf("%d ",j);
           
            
        }
       
        
       for (int space = i; space < 5; space++)
        {
            printf("    ");
        }
        
        for (int j = i; j >=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");    
}
}