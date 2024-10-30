#include<stdio.h>

int main(){
 float s,h,d,t,grosssalary;
 printf("Enter Velue Of salary = ");
 scanf("%f",&s);
  printf("Enter Velue Of HRM = ");
 scanf("%f",&h);
   printf("Enter Velue Of DA = ");
 scanf("%f",&d);
   printf("Enter Velue Of TA = ");
 scanf("%f",&t);

 grosssalary =(s+(s*h/100)+(s*d/100)+(s*t/100));
 printf("%0.1f",grosssalary);



  
     
}