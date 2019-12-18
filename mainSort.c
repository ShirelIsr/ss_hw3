#include <stdio.h>
#include "isort.h"

int main()
{
    int arr[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", (arr + i));
    }
    insertion_sort(arr, SIZE);
    print_arr(arr, SIZE);
    
    return 0;
}
