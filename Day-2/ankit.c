#include<stdio.h>
int main(){
    int a = 12;
    int b = 6;

    printf("Addition of 12 and 6 is 18\n");
    printf("Subtraction of 12 and 6 is 6\n");
    printf("Multiplication of 12 and 6 is 72\n");
    printf("Division of 12 and 6 is 2\n");
    printf("Modulo of 12 and 6 is 0\n");
    
    
    printf("\n");
    printf("\n");
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d x %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d % %%d = %d\n",a,b,a%b);

    printf("\n");
    printf("\n");

    int e = 5;
    int c = 5;
    printf("--------------\n");
    printf("|            |\n");
    printf("| %d x %d = %d |\n",e,c,e*c);
    printf("|            |\n");
    printf("--------------\n");
}