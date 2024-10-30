#include <stdio.h>

int main() {
    int a, b, c,d;

    
    printf("Enter any number: ");
    scanf("%d", &a);
   b = a % 10;  
   d = a;
    while (d >= 10) {
        d = d / 10;
    }
   c = d;

    
    int sum =c + b;

    
    printf("The sum of  the last digit: %d\n",sum);
}