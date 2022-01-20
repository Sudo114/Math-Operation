/*
Author : Hemansh 
Contact : zacnutbiz@gmail.com
*/

#include <stdio.h>
int main()
{
    int ch;
    int a;
    int b;

    printf("Which Operation you want to perform \n");
    printf("0 For Subtraction \n");
    printf("1 for Addition \n");
    printf("2 for Division\n");
    printf("3 for Multiplication\n");
    printf("NOTE : YOU CAN ONLY ENTER INTEGER VALUES\n");

    printf("-----> ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("Enter the first number  \n");
        scanf("%d", &a);
        printf("enter the second number  \n");
        scanf("%d", &b);
        printf("Addition is  %d\n", a + b);
    }
    if (ch == 3)
    {
        printf("Enter the first number   \n");
        scanf("%d", &a);
        printf("enter the second number \n");
        scanf("%d", &b);
        printf("Multiplication is  %d\n", a * b);
    }
    if (ch == 0)
    {
        printf("Enter the first number   \n");
        scanf("%d", &a);
        printf("enter the second number  \n");
        scanf("%d", &b);
        printf("Subtraction is  %d\n", a - b);
    }
    if (ch == 2)
    {
        printf("Enter the first number to be divided by b  \n");
        scanf("%d", &a);
        printf("enter the second number to divide a \n");
        scanf("%d", &b);
        printf("Quotient is  %d\n", a / b);
        printf("Remainder is  %d\n", a % b);
    }

    return 0;
}
