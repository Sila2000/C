//author Sila2000
//subtraction of two vector
#include<stdio.h>
main()
{
    int sizeA, sizeB, i, num_A[100], num_B[100];

    printf("Enter the size of Vector A: ");
    scanf("%d", &sizeA);

    printf("Enter the size of Vector B: ");
    scanf("%d", &sizeB);

    if(sizeA == sizeB)
    {
        printf("\nVector A:\n");
        for(i = 0; i < sizeA; i++)
        {
            printf("num_A[%d] = ", i);
            scanf("%d", &num_A[i]);
        }

        printf("\nVector B:\n");
        for(i = 0; i < sizeB; i++)
        {
            printf("num_B[%d] = ", i);
            scanf("%d", &num_B[i]);
        }

        printf("\nAfter SUBTRACTION:\n");
        for(i = 0; i < sizeA; i++)
        {
            printf("num_C[%d] = %d\n", i, num_A[i] - num_B[i]);
        }
    }

    else
        printf("\nSize of Vector A and Vector B must be same.\nPlease try again!");
}