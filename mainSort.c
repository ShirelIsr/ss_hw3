#include <stdio.h>
#include "isort.h"

int main() {
    int arr[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
    {
        printf("enter a num :\n");
        scanf("%d",(arr+i));
        //printf("%d\n",*(arr+i));
    }
    printf("before sort\n");
    for (int i = 0; i < SIZE; i++)
    {
        if(i != SIZE -1)
        {
            printf("%d,",*(arr+i));
        }
        else printf("%d\n",*(arr+i));
    }
    printf("after sort\n");

    insertion_sort(arr,SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        if(i != SIZE -1)
        {
            printf("%d,",*(arr+i));
        }
        else printf("%d\n",*(arr+i));
    }

    int sort_arr[SIZE] = {0};
    int *t = &sort_arr[5];
    for (int i = 0; i < SIZE; i++)
    {
        sort_arr[i] = i;
        printf("%d,",sort_arr[i]);
    }
    printf("\n");
    shift_element(t,2);
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d,",sort_arr[i]);
    }
    return 0;
}