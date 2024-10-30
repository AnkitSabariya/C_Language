#include<stdio.h>
int main(){
    int user,sum = 0;

    printf("Enter a number : ");
    scanf("%d",&user);
    for (int i = 1; i <= user; i++)
    {
      printf("%d ",i);
      sum = sum + i;
    }
    
    printf("\n");
    printf("Sum of digits : %d",sum);
    
    
  

}
