#include<stdio.h>
int main(){

    float a,b;
    float p,q;
    
    

    printf("enter your w = ");
    scanf("%f",&a);

    printf("enter your i = ");
    scanf("%f",&b);

    printf("%.0f X %.0f = %.0f\n",a,b,a*b);

    printf("enter your w = ");
    scanf("%f",&p);

     printf("enter your i = ");
    scanf("%f",&q);

    printf("%.0f X %.0f = %.0f\n",p,q,p*q );
    printf("total  quantity :-\n");
     printf("%.0f + %.0f = %.0f\n",b,q,b+q);
     printf("%0.f + %0.f = %0.f\n",a*b,p*q,a*b+p*q );
     printf("Final Ans :-\n");
     printf("%0.f / %0.f = %0.f ",a*b+p*q,b+q,(a*b+p*q)/(b+q));
     
   

    
}