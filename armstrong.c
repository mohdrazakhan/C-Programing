#include<stdio.h>
// WAP to find wether enter number is Armstrong number or not
void main()
{
    int a,sum,n,num,r;
    clrscr();
    printf("Enter any number to find wether Armstrong num or not:");
    scanf("%d",&a);

    n=num;
    while(num!=0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(n==sum)
    {
        printf("%d is Armstrong Number",&a);1
    }
    else
    {
        printf("%d is Not a Armstrong Number",a)
    }
    getch();
}