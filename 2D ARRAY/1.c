#include <stdio.h>
int main()
{
    int row, col, sum = 0, mul;
    float avg;
    printf("Enter the No. of rows = ");
    scanf("%d", &row);

    printf("Enter the No. of cols = ");
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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            sum = sum + box[i][j];
            mul = row * col;
        }
    }
    avg = (float)sum / mul;
    printf("final avg of ans %.2f ", avg);
    printf("\n");
}