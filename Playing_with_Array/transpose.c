//Author Sila2000
//Transpose of one vector

#include<stdio.h>

main()
{
    int row, col, i, j, num_list[100][100], num_listT[100][100];

    printf("Enter the number of rows of the vector: ");
    scanf("%d", &row);
    printf("Enter the number of columns of the vector: ");
    scanf("%d", &col);

    if (row == 0 && col == 0)
        printf("Zero Vector");
    
    else if (row == 0 || col == 0)
        printf("\nOne of the dimensions of the array must be greater than 0.\nPlease try again to obtain transpose!");

    else
    {
        printf("\nBefore TRANSPOSE:\n");
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                printf("num[%d][%d] = ", i, j);
                scanf("%d", &num_list[i][j]);
            }
        }

        printf("\nAfter Transpose:\n");
        for(i = 0; i < col; i++)
        {
            for(j = 0; j < row; j++)
            {
                num_listT[i][j] = num_list[j][i];
            }
        }

        for(i = 0; i < col; i++)
        {
            for(j = 0; j < row; j++)
            {
                printf("num'[%d][%d] = %d\n", i, j, num_listT[i][j]);
            }   
        }
    }
}