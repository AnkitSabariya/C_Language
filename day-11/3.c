#include <stdio.h>

// even numbers from 1 to N using a do-while loop.

int main(){
    int start = 2 ,end;

    printf("enter  the ending number = \n");
    scanf("%d",&end);

   do
   {
    
    printf("%d\t",start);
    start+=2;

   
   } while (start <= end);
   
   
    

}