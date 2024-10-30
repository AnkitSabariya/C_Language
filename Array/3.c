#include<stdio.h>
int main(){
    int user;

    printf("Enter array size: ");
    scanf("%d",&user);

    int box1[user];
    

    for (int i = 0; i < user; i++)
    {
        printf("Enter the velue box1[%d] = ",i);
        scanf("%d",&box1[i]);
        
        
    }
    printf("=====================================================\n");
    for (int i = 0; i < user; i++)
    {
        printf(" velue in box1 =%d\n",box1[i]);
        
        
        
    }
    int box2[user];

    for (int i = 0; i < user; i++)
    {
        printf("Enter the velue box2[%d] = ",i);
        scanf("%d",&box2[i]);
        
        
    }
    printf("=====================================================\n");
    for (int i = 0; i < user; i++)
    {
        printf(" velue in box2 = %d\n",box2[i]);
        
        
        
    }
    int sum;

     for (int i = 0; i < user; i++)
    {
        sum = box1[i] + box2[i];
        printf(" final ans box 1 or 2 is = %d\n",sum);
        
        
        
    }
    


}