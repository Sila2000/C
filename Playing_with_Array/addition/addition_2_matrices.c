//author Sila2000
//addition of two matrices
#include<stdio.h>
main()
{
    int rowA, colA, rowB, colB, i, j, num_A[100][100], num_B[100][100];

    printf("Enter the number of rows of Vector A: ");
    scanf("%d", &rowA);
    printf("Enter the number of columns of Vector A: ");
    scanf("%d", &colA);

    printf("\nEnter the number of rows of Vector B: ");
    scanf("%d", &rowB);
    printf("Enter the number of columns of Vector B: ");
    scanf("%d", &colB);

    if(rowA == rowB && colA == colB)
    {
        printf("\nMatrix A:\n");
        for(i = 0; i < rowA; i++)
        {
            for(j = 0; j < colA; j++)
            {
                printf("num_A[%d][%d] = ", i, j);
                scanf("%d", &num_A[i][j]);
            }
        }

        printf("\nMatrix B:\n");
        for(i = 0; i < rowA; i++)
        {
            for(j = 0; j < colB; j++)
            {
                printf("num_B[%d][%d] = ", i, j);
                scanf("%d", &num_B[i][j]);
            }
        }

        printf("\nAfter Addition:\n");
        for(i = 0; i < rowA; i++)
        {
            for(j = 0; j < colA; j++)
            {
                printf("num_C[%d][%d] = %d\n", i, j, num_A[i][j] + num_B[i][j]);
            }
        }
    }

    else
        printf("\nSize of Matrix A and Matrix B must be same.\nPlease try again!");
}
