#include<stdio.h>
int main()
{
// WAP to determine greatest, number B/W two numbers.
float fn,sn;
printf("Enter Your First Number: ");
scanf("%f",&fn);
printf("Enter Your Second Number: ");
scanf("%f",&sn);

if(fn>sn)
 {
    printf("Your First Number %f > is Grater Than your Second number %f",fn,sn);
 }
else
 {
    printf("Your Second Number %f > is Grater Than Your First Number %f",sn,fn);
 }


return 0;
}