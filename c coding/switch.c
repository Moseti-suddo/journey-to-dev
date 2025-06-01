#include<stdio.h>
int main()
{
    int a, b, c, d;
    float total;
    int average;
    printf("Enter Eng Maths kiswahili science\n marks: ");
    scanf("%d%d%d%d", &a,&b,&c,&d);

total = (a+b+c+d);
average= total/4;
printf("Your total is %f \n" ,total);
printf("Your average is %d \n" , average);

switch (average)
{
case 70 ... 100:
    printf("A");
    break;
case 60 ... 69:
    printf("B");
    break;
case 50 ... 59:
    printf("C");
    break;
default:
    printf("Fail");
    break;
}












    return 0;
}