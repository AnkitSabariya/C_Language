#include <stdio.h>
int main()
{
    int row, sum = 0;

    printf("Enter the No. of rows  cols = ");
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
    for (int i = 0; i < row; i++)
    {
        sum += box[i][i];
    }
    printf("The sum of diagonal elements of an Array: %d\n", sum);
}