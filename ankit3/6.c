#include<stdio.h>
int main(){
    int p,r,n;
    printf("Enter Your price : ");
    scanf("%d",&p);
    printf("Enter Your rate : ");
    scanf("%d",&r);
     printf("Enter Your month : ");
    scanf("%d",&n);
    printf("%d",p*r*n/100);

}