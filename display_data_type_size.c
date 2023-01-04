#include<stdio.h>
int main()
{
    //WAP to display size of every data type
    int in;
    float fl;
    double dob;
    char ch;
// use %lu or %zu format specifier use for showing data size
    printf("Size of int: %lu bytes\n", sizeof(in));
    printf("Size of float: %lu bytes\n", sizeof(fl));
    printf("Size of double: %lu bytes\n", sizeof(dob));
    printf("Size of char: %lu bytes\n", sizeof(ch));


 return 0;
}