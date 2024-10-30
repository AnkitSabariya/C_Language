#include<stdio.h>


int main(){

int user,sum = 1;

printf("enter velue = ");
scanf("%d",&user);

for (int start = 1; start <= 10; start++)
{
   
    printf("%d x %d = %d\n",user,start,start * user );

}



}