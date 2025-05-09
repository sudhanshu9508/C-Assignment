// Assignment 5
// 1 WAP to check if a given number is positive or non-positive
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("This is a positive number.\n");
    else
        printf("This is a non-positive number.\n");
}

// 2 WAP to find if the given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0)
        printf("This number is divisible by 5.\n");
    else
        printf("This number is not divisible by 5.\n");
}

// 3 WAP to find if the given number is even or odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("This is an even number.\n");
    else
        printf("This is an odd number.\n");
}

// 4 WAP to find if the given number is even or odd without using the modulus operator
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        num = num - 2;
    }
    if (num == 0)
        printf("The given number is even.\n");
    else
        printf("The given number is odd.\n");
}

// 5 WAP to find if the given number is even or odd without using the modulus operator
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if ((num & 1) == 0)
        printf("The given number is even.\n");
    else
        printf("The given number is odd.\n");
}

// 6 WAP to check if the given number is a three-digit number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num > 999 || num < 100)
        printf("The given number is not a three-digit number.\n");
    else
        printf("The given number is a three-digit number.\n");
}

// 7 WAP to find the greater number between two numbers, if both are equal, print one
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        printf("Num1 is greater: %d\n", num1);
    else if (num2 > num1)
        printf("Num2 is greater: %d\n", num2);
    else
        printf("Both numbers are equal: %d\n", num1);
}

// 8 WAP to check whether the roots of a given quadratic equation are real & distinct, real & equal, or imaginary
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant;
    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0)
        printf("The roots are real and distinct.\n");
    else if (discriminant == 0)
        printf("The roots are real and equal.\n");
    else
        printf("The roots are imaginary.\n");

    return 0;
}

// 9 WAP to check if the given year is a leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
}

// 10 WAP to find the greatest number among three numbers
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
        printf("The number 1 is greater\n");
    else if (num2 > num1 && num2 > num3)
        printf("The number 2 is greater\n");
    else
        printf("Number 3 is greater\n");
}
