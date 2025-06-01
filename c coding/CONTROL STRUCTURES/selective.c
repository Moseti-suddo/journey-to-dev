#include <stdio.h>
#define PI 3.142

int main()
{
    // IF statement
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age); 

    if (age > 18)
    {
        printf("Congratulations you are an adult!! \n");
    }
    printf("welcome");

    printf("\n \n");


    //IF ELSE statement
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade > 8)
    {
        printf("Congratulations you will be advancing soon \n");
    }

    else 
    {
        printf("Sorry keep studying youre not going anywhere \n");
    }

    printf("\n \n");

    int r;
    float area;

    do{ // using do while to keep asking until a positive radius is entered.

    printf("Enter the radius of your circle: ");
    scanf("%d", &r);

    if( r < 0)
    {
        printf("Radius can NEVER be less than zero. Try again\n");
    }

}
   while( r < 0);

    
    area = PI * r * r;

    printf("The area is %f \n", area);

    if(area >= 100 )
    {
        printf("Big circle");
    }

    else
    {
        printf("Small circle");





    return 0;
}