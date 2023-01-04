#include<stdio.h>
 void main()
{
    // for finding largest in four number
int a,b,c,d;
 printf("Enter first Number");
 scanf("%d",&a);
 printf("Enter Second Number");
 scanf("%d",&b);
 printf("Enter Third Number");
 scanf("%d",&c);
 printf("Enter Fourth Number");
 scanf("%d",&d);
    if(a>b) 
    { 
        if(a>c) 
        { 
            if(a>d) 
            {   
                printf("%d is big",a); 
            } 
            else 
            { 
                printf("%d is big",d); 
            } 
        } 
    } 
    else if(b>c) 
        { 
            if(b>d) 
                { 
                    printf("%d is big",b); 
                } 
            else 
                { 
                    printf("%d is big",d); 
                } 
        } 
        else if(c>d) 
            { 
               printf("%d is big",c); 
            } 
        else 
        { 

            printf("%d is big",d); 
        } 
 
}