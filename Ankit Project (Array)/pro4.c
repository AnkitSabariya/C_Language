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
            printf("%d", box[i][j]);
        }
        printf("\n");
    }

    int rownum, sum = 0;
    printf("Enter row number: ");
    scanf("%d", &rownum);

    for (int i = 0; i < row; i++)
    {
        sum += box[rownum][i];
    }
    printf("Sum of row %d: %d\n", rownum, sum);

    int colnum, Sum = 0;
    printf("Enter column number: ");
    scanf("%d", &colnum);

    for (int j = 0; j < col; j++)
    {
        Sum += box[j][colnum];
    }
    printf("Sum of column %d: %d\n", colnum, Sum);
}
