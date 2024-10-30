#include <stdio.h>
int main()
{
    int row;

    printf("Enter the array's row & column size: ");
    scanf("%d", &row);

    int box[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf(" box[%d][%d] ", i, j);
            scanf("%d", &box[i][j]);
        }
    }

    
    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {

            printf("%d ", box[j][i]);
        }
        printf("\n");
    }
}