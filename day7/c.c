#include<stdio.h>

int main(){

int a,b,c;

float d;

printf("enter the english mark");

scanf("%d",&a);


printf("enter the maths mark");

scanf("%d",&b);


printf("enter the  hindi mark ");

scanf("%d",&c);

if (a<0 || b<0 || c<0 || a>100 ||b>100 || c>100)
{
   printf("invalid");
}
else
{
    d=(a+b+c)/3;

    printf("the average is %.2f",d);
}












}