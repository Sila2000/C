//author Sila2000
//multiplication of scalar with array

#include <stdio.h>

main()
{
    int row, col, i, j, num_list[100][100], scalar;

    printf("Enter the number of row of matrix: ");
    scanf("%d", &row);
    printf("Enter the number of column of matrix: ");
    scanf("%d", &col);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("num[%d][%d] = ", i, j);
            scanf("%d", &num_list[i][j]);
        }
    }

    printf("\nMultiplication of Array with SCALAR:\n");
    printf("Enter Scalar: ");
    scanf("%d", &scalar);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("num'[%d][%d] = %d\n", i, j, scalar*num_list[i][j]);
        }
    }
}