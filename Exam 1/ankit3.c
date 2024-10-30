#include<stdio.h>

int main(){
    int a,b,c,d,totalsalary;

    printf("Input: Base Salary :- ");
    scanf("%d",&a);
    printf("HRA = ");
    scanf("%d",&b);
    printf("DA = ");
    scanf("%d",&c);
    printf("TA = ");
    scanf("%d",&d);
    totalsalary = a+(a*b/100)+(a*c/100)+(a*d/100);
    printf("%d",totalsalary);
    

  




    
    
}