#include<stdio.h>
int main()
{
    // For Calculation of Area of circle & Area Of Circumfrance 
    float AOC,COC, radius;
    printf("Enter the value of radius");
    scanf("%f",& radius);

    AOC= 3.14*radius*radius;
    COC= 2*3.14*radius;

    printf("Area of Circle is: %f\n", AOC);
    printf("Circumfreance of Circle is: %f\n",COC);
    return 0;

}