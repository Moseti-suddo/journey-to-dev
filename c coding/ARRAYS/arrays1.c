// TRANSVERSAL IN ARRAYS
/* traversal isn’t limited to just printing. In data structures, traversal means visiting
every element in some order, which you might use to:
Print values, Modify values, Search for an element, Accumulate a sum,
Or anything that involves accessing each element one by one*/

/* Dont hard code the size of your array... If you hardcode size, then forget to update it when
you add or remove elements, your array might behave unpredictably or your program might crash. instead use the sizeof() operator
int size = sizeof(arr) / sizeof(arr[0]);...  sizeof(arr) gives the total size in bytes of the entire array arr.
sizeof(arr[0]) gives the size in bytes of one element of the array
(the first element, but all elements are the same size).
By dividing total size by one element size, you get the number of elements in the array. */
#include <stdio.h>
int main()
{
    int arr[] = {23, 34, 45, 16, 28, 30};
    int size = sizeof(arr) / sizeof(arr[0]); // By dividing total size by one element size, you get the number of elements in the array.

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Access elements at index i and print it
    }

    printf("\n");

    for (int i = size - 1; i >= 0; i--) // printing in reverse
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Modifying an array during transversal

    // Transversal + modification: add 5 to each element
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 5;
    }

    printf("Modified array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("/n");

    return 0;
}