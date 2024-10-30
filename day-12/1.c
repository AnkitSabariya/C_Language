#include<stdio.h>
// the sum of all numbers from 1 to N using a for loop.

int main(){

int user,sum;

printf("enter velue = ");
scanf("%d",&user);

for (int start = 1; start <= user; start++)
{
    sum += start;
    printf("%d\n",sum);

}



}