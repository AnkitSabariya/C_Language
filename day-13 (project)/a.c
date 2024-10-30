#include<stdio.h>

int main(){

    char add = 'a';


    do
    {
      
         if (add % 4== 1) { 
           
        
        printf("%c\n",add);
         
     }
     add++;
    continue;
       
    } while (add <= 'z');
    
    
    
    
}