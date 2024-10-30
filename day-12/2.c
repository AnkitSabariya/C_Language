#include<stdio.h>
// the sum of all numbers from 1 to N using a for loop.

int main(){

int user,sum = 1;

printf("enter velue = ");
scanf("%d",&user);

for (int start = 1; start <= user; start++)
{
    sum= sum*start;

}
printf("%d",sum);


}