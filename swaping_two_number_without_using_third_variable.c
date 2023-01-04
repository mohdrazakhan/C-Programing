#include<stdio.h>
int main()
{
    //Swaping Two Number Without using third number
    int a,b;
    printf("Enter the value of First Number (a) is:");
    scanf("%d",& a);
    printf("Enter the value of Second Number (b) is:");
    scanf("%d",& b);
    printf("Before Swaping \n Value of a=%d\n Value of b=%d\n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swaping\n Value of a: %d\n Value of b: %d\n",a,b );

return 0;
}