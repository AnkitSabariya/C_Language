#include<stdio.h>
int main(){
    int new = 1;

   for (int row = 1; row <= 5; row++)
   {
    for (int col = row; col >= 1; col--)
    {
        printf("%d ",new);
        new++;
    }
    printf("\n");
    
   }
   
}