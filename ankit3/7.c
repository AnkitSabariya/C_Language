#include<stdio.h>

int main(){
    
    float r;
    const float pi = 3.14;
    const int a = 2;
    
    
    printf("Enter Your radius : ");

    scanf("%f",&r);
    printf("Enter Your ans : ");
    printf("%.4f",a*pi*r);

}