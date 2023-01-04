#include<stdio.h>
int main()
{
    //write the programm to enter the marks of a student in 5 subject and than calculate the aggrigate and display the grade obtain by student.
    float Eng,Math,CSE,Phy,Chem,avg;
    printf("Enter the marks in english:");
    scanf("%f",& Eng);
    printf("Enter the marks in math:");
    scanf("%f",& Math);
    printf("Enter the marks in CSE:");
    scanf("%f",& CSE);
    printf("Enter the marks in Physics:");
    scanf("%f",& Phy);
    printf("Enter the marks in Chemistry:");
    scanf("%f",& Chem);

    avg= (Eng+Math+CSE+Phy+Chem)/5;

    printf("Aggrigate marks Student Obtain is: %f\n",avg);

    if(avg>=80)
     {
        printf("Grade is: A");
     }
     else if (avg>=70)
     {
        printf("Grade is: B");
     }
     else if (avg>=60)
     {
        printf ("Grade is: C");
     }
     else if (avg>=45)
     {
        printf("Grade is: D");
     }
     else
     {
        printf("Fail");
     }

return 0;

}