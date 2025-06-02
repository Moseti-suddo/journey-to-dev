#include<stdio.h>

int areaofRect(int length , int width)
{
    int area;
    area =(length * width);
    return area;
}

int main()
{
    int length, width;
    int area;

    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the width: ");
    scanf("%d", &width);

    area = areaofRect(length , width);
    printf("Area = %d " , area);

    return 0;
}