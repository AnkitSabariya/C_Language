#include <stdio.h>
int main()
{
    int row, col, new;

    printf("Enter array row size: ");
    scanf("%d", &row);
    printf("Enter array col size: ");
    scanf("%d", &col);

    int box[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf(" box[%d][%d] ", i, j);
            scanf("%d", &box[i][j]);
        }
    }
    printf("===========================================================================\n");
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (new < box[i][j])
            {
                new = box[i][j];
            }
        }
        printf("\n");
    }
        printf("The largest element is::%d",new);
}