#include<stdio.h>

int main(){
    int a,b,c;
    float averagemark;

    printf("Enter English mark = ");
    scanf("%d",&a);
    printf("Enter Hindi mark = ");
    scanf("%d",&b);
    printf("Enter Maths mark = ");
    scanf("%d",&c);
    if (a < 0 || b < 0 || c < 0 || a > 100 || b > 100 || c > 100)
    {
        printf("invalid marks");
    }
    else{
         averagemark = (a+b+c)/3;
    printf("%0.1f",averagemark);

    }   
}