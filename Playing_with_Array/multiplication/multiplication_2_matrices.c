//Sila2000
//multiplication of two array


#include<stdio.h>

main()
{
    int rowA, colA, rowB, colB, i, j, k, num_listA[100][100], num_listB[100][100], sum = 0, mult_num[100][100];

    printf("Enter the number of rows of the Array A: ");
    scanf("%d", &rowA);
    printf("Enter the number of columns of the Array A: ");
    scanf("%d", &colA);

    printf("\nEnter the number of rows of the Array B: ");
    scanf("%d", &rowB);
    printf("Enter the number of columns of the Array B: ");
    scanf("%d", &colB);

    printf("\nARRAY 1\n");
    for(i = 0; i < rowA; i++)
    {
        for(j = 0; j < colA; j++)
        {
            printf("num1[%d][%d] = ", i, j);
            scanf("%d", &num_listA[i][j]);
        }
    }

    printf("\nARRAY 2\n");
    for(i = 0; i < rowB; i++)
    {
        for(j = 0; j < colB; j++)
        {
            printf("num2[%d][%d] = ", i, j);
            scanf("%d", &num_listB[i][j]);
        }
    }

    printf("\nAfter MULTIPLICATION:\n");
    if(colA == rowB)
    {
        for(i = 0; i < rowA; i++)
        {
            for(j = 0; j < colB; j++)
            {
                sum = 0;
                for(k = 0; k < colA ; k++)
                {
                    sum += num_listA[i][k]*num_listB[k][j];
                }
                mult_num[i][j] = sum;
                printf("mult_num2[%d][%d] = %d\n", i, j, sum);
            }
        }
    }

    else
    {
        printf("Can't perform Multiplication. Please try again!");
    }
}
