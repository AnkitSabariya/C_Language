#include<stdio.h>
int main(){

   for (char row = 'a'; row <= 'e'; row++)
   {
    for (char col = row; col >= 'a'; col--)
    {
        printf("%c ",col);
    }
    printf("\n");
    
   }
   
}