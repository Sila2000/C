//sort the vector elements in ascending and descending order

#include <stdio.h>

main()
{
    int size, i, num_list[100], box, j;

    printf("Enter the size of the vector: ");
    scanf("%d", &size);

    printf("\nBefore Sorting:\n");
    for(i = 0; i < size; i++)
    {
        printf("num[%d] = ", i); scanf("%d", &num_list[i]);
    }

    printf("\nAfter Sorting:\n(i)ASCENDING ORDER:\n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < (size - i - 1); j++)
        {
            if(num_list[j] > num_list[j + 1])
            {
                box = num_list[j]; num_list[j] = num_list[j + 1]; num_list[j + 1] = box;
            }
        }
    }
    for(i = 0; i < size; i++)
    {
        printf("sort_num[%d] = %d\n", i, num_list[i]);
    }

    printf("\n(ii)DESCENDING ORDER:\n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < (size - i - 1); j++)
        {
            if(num_list[j] < num_list[j + 1])
            {
                box = num_list[j];
                num_list[j] = num_list[j + 1];
                num_list[j + 1] = box;
            }
        }
    }
    for(i = 0; i < size; i++)
    {
        printf("sort_num[%d] = %d\n", i, num_list[i]);
    }
}
