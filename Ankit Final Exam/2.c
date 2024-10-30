#include<stdio.h>
int main(){
    int user,mul = 1;

    printf("Enter a number : ");
    scanf("%d",&user);
    for (int i = 1; i <= user; i++)
    {
      printf("%d ",i);   
      mul = mul * i;
    }
    printf("\n");
    printf("Factorial of digits : %d",mul);
}
