#include<stdio.h>

int main(){


    int a,b,c,d;

         printf("first value => ");
         scanf("%d",&a);
        
         printf("second value => ");
         scanf("%d",&b);
        
         printf("third value => ");
         scanf("%d",&c);
        
         printf("fourth value => ");
         scanf("%d",&d);
        
if (a != b && a != c && a != d && b != c && b != d && c != d)
{
    if (a > b)
{
    if (a > c)
    {
        if (a > d)
        {
            printf("a is big value");
        }
        else
        {
            printf("d is big value");
        }
    }
    else
    {
        if (c > d)
        {
            printf("c is big value");
        }
        else
        {
            printf("d is big value");
        }
    }
}
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is big value");
            }
            else
            {
                printf("d is big value");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is big value");
            }
            else
            {
                printf("d is big value");
            }
        }
    }
    }
    else
    {
        printf("Error because velues are same");
    }
    
}

