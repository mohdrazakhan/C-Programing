#include<stdio.h>
int main()
{
 //Convert fahrenheit to calcius Degree
 float FT,CT;
 printf("Enter The Temperature in fahrenheit: ");
 scanf("%f",& FT);
 CT=(FT-32)*5/9;

 printf("Tempirature in Calcius is:%f",CT);

 return 0;
}