//Sila2000
//Deletion

#include<stdio.h>

main()
{
    int size, i, num_list[100], post_del;

    printf("Enter the size of vector: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++)
    {
        printf("num[%d] = ", i);
        scanf("%d", &num_list[i]);
    }

    printf("\nEnter the index of deletion: ");
    scanf("%d", &post_del);

    if(post_del < 0 || post_del > size)
        printf("Index of deletion must be greater than or equal to 0 and less than or equal to %d\nThere will be no DELETION.", size);
    
    else
    {
        printf("AFTER DELETION:\n");
        
        for(i = post_del; i < size; i++)
        {
            num_list[i] = num_list[i + 1];
        }


        for(i = 0; i < size - 1; i++)
        {
            printf("num[%d] = %d\n", i, num_list[i]);
        }
    }
}
