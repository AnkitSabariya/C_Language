#include <stdio.h>
int main()
{
  int row, col, sum = 0;
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
  printf("===========================================================================\n");
  int box2[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf(" box2[%d][%d] ", i, j);
      scanf("%d", &box2[i][j]);
    }
  }
  printf("===========================================================================\n");
  int box3[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      box3[i][j] = box[i][j] + box2[i][j];
      printf("%d ", box3[i][j]);
    }
    printf("\n");
  }
}