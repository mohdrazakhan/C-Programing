#include<stdio.h>
int main()
{
    // geting input character in upper case and print in lower case
    char uch,lch;
    int ch_ascii;
    printf("Enter the Character in Upper case");
    scanf("%c",& uch);
    lch=uch+32;
    printf("Charecter in lower case is: %c",lch);
    return 0;

}