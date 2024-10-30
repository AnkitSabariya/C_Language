#include <stdio.h>
int user(char userr;){
    

    printf("Enter The velue : ");
    scanf("%d", &userr);

    int box[userr];
    for (int i = 0; i < userr; i++){
        printf("box[%d] = ", i);
        scanf("%d", &box[i]);
    }
    int sum = 0;
    for (int i = 0; i < userr; i++){
        sum += box[i];
    }
    printf("The sum of an Array:%d ", sum);
}
int main(){
       user();
}