#include<stdio.h>

int main(){
    
    
    float b,h;

    const float D = 0.5;
    printf("Enter Your Width : ");
    scanf("%f",&b);
    printf("Enter Your height : ");
    scanf("%f",&h);

    printf("%.1f",D*(b*h));

}