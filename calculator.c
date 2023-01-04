#include<stdio.h>
int main()
{
    // WAP for Calculator using switch 
    char ch;
    float fn,sn,sum,sub,mul,div;
    printf("Enter oprater such as:+,-,*,:");
    scanf("%c", & ch);
    printf("Enter the first Number:");
    scanf("%f", & fn);
    printf("Enter the Second Number:");
    scanf("%f", & sn);

    switch (ch)
    {
    case '+':
         sum=fn+sn; 
         printf("Sum of tho number is %f",sum);
        break;
    case '-':
        sub=fn-sn;
        printf("Subtraction of two number is %f", sub);
       break;
    case '*':
        mul=fn*sn;
        printf("Multiplication of two number is %f",mul);
        break;
    case '/':
        div=fn/sn;
        printf("Division of two number is %f", div);
        break;
    
    default:
    printf("Enter only +,-,*,/, these opraters, \n You Enter Invalid value");
        break;
    }
    return 0;

}