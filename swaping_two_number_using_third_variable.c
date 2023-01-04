#include<stdio.h>
int main()
{
    // Swaping two number using third or temp. variable
    int a,b,c;
    printf("Enter the value of number a");
    scanf("%d",& a);
    printf("Enter the value of number b");
    scanf("%d",& b);
    printf("Before Swaping \n Value of a=%d\n Value of b=%d\n", a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swaping \n Value of A is:%d\n Value of b is:%d\n",a,b);
    return 0;
}