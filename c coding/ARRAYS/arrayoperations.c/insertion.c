#include <stdio.h>
int main()
{
    int arr[10] = {5 , 7 , 8 , 4 , 3 , 9};
    int size = 6;
    int pos = 3;
    int value = 15;

    //Shift elements to the right
    for(int i = size-1 ; i >=pos ; i--)
    arr[i + 1] = arr[i];

    //Insert the new value
    arr[pos] = value;

    //Update the size
    size = size + 1; //size++

    printf("The new array is: ");
    for(int i = 0 ; i < size ; i++ )
    printf("%d ", arr[i]);



    return 0;
}