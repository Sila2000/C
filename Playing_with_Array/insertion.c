//Sila2000
//Insertion

#include<stdio.h>

main()
{
    int size, i, num_list[100], post_i, element;

    printf("Enter the size of vector: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++)
    {
        printf("num[%d] = ", i);
        scanf("%d", &num_list[i]);
    }

    printf("\nEnter the index of insertion: ");
    scanf("%d", &post_i);

    if(post_i < 0 || post_i > size)
        printf("Index of insertion must be greater than or equal to 0 and less than or equal to %d\nThere will be no INSERTION.", size);
    
    else
    {
        for(i = size; i > post_i; i--)
        {
            num_list[i] = num_list[i - 1];
        }

        printf("Enter the element to be inserted: ");
        scanf("%d", &element);
        num_list[post_i] = element;
        
        printf("\nAFTER INSERTION:");

        for(i = 0; i <= size; i++)
        {
            printf("\nnum[%d] = %d", i, num_list[i]);
        }
    }
}