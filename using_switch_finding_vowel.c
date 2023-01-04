#include<stdio.h>
int main()
{
    //WAP using switch to find given character is vowel or not 
    char choice;
    printf("Enter any Character:");
    scanf("%c",& choice);
    switch (choice)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("%c is a Vowel", choice);
    break;

    default:
    printf("%c is not a vowel", choice);
    }
    return 0;
}