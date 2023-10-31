//find out the largest and smallest element in the vector (1D array)
#include <stdio.h>

main()
{
    int size, num_list[100], i, max, min;

    printf("Enter the size of the vector: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++)
    {
        printf("a[%d] = ", i); scanf("%d", &num_list[i]);
    }
    
    max = num_list[0]; min = num_list[0];

    for(i = 0; i < size; i++)
    {
        if(num_list[i] > max)
            max = num_list[i];
        if(num_list[i] < min)
            min = num_list[i];
    }

    printf("\nLargest element in the vector = %d\n", max);
    printf("Smallest element in the vector = %d", min);
}