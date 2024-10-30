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
}