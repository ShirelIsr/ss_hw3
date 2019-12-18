#include <stdio.h>
#include "isort.h"
<<<<<<< HEAD
int arr[SIZE];
void shift_element(int *arr, int i)
{
    int j = 0;
    int k = i;
    int *p = (int *)(&arr + 1) - 1; // last place in the array
    int key = *(arr + i);
    //("*p = %d\n",*p);
    //if ((arr + i) > (p + 1))
    //{
    //    printf("out of boundries\n");
    //    return;
    //}

    while (j <= i)
    {
        *(arr + k) = *(arr + k - 1);
        //printf("arr[i] = %d ",*(arr+k-1));
        //*(arr + 1) = *(arr)
        k--;
        j++;
    }
    *arr = key;
}
/*void shift_element(int *arr,int n)
=======
#define SIZE 5
int arr[SIZE]={7,4,2,8,9};

void shift_element(int *arr,int n)
>>>>>>> d5f3e9e315c7da189d9e5332ce69c77b2022b888
{
    int i=0;
    for(int j=1;j<n;j++,i++)
    {
        printf("%d ,",*(arr+j));
       int temp=*(arr+j);
       *(arr+j)=*(arr+i);
       *(arr+i)=temp;
    }
<<<<<<< HEAD
}*/

/* Function to sort an array using insertion sort*/
void insertion_sort(int *arr, int len) 
{ 
    int i, key, j; 
    for (i = 1; i < len; i++) { 
        key = *(arr + i); 
        j = i - 1; 
  
        while (j >= 0 && *(arr + j) > key) { 
            *(arr + j + 1) = *(arr + j); 
            j = j - 1; 
        } 
        *(arr + j + 1) = key; 
    } 
}
/*void insertion_sort(int *arr, int len)
{
    int i, j;
    for (i = 1; i <= len; i++)
    {
        j = i - 1;
        while ((j >= 0) && (*(arr + j) > *(arr + i)))
        {
            shift_element(arr + j, len - i);
            j = j - 1;
        }
    }
}*/
=======
    printf("\n");

}

/* Function to sort an array using insertion sort*/
void insertion_sort(int* arr , int len)
{ 
    int i, j; 
    for (i = 1; i < len; i++)
     { 
        j = i - 1; 
        if((j>=0)&&(*(arr+j) >*(arr+i)))
      
        {
            shift_element(arr+j,len-i); 
             j --; 
        } 
      }
  
  
} 
>>>>>>> d5f3e9e315c7da189d9e5332ce69c77b2022b888
