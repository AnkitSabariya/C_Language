#include<stdio.h>
int main(){
    int user;
    float sum;

    printf("Enter array size: ");
    scanf("%d",&user);

    int box[user];

    for (int i = 0; i < user; i++)
    {
        printf("Enter the velue box[%d] = ",i);
        scanf("%d",&box[i]);
        
        
    }
    printf("=====================================================\n");
    for (int i = 0; i < user; i++)
    {
        sum = sum + box[i];
        
        
        
        
    }
    printf("Average of an Array: %.2f",sum/user);
    


}