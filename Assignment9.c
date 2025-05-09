// Assignment 9
// 1 WAP to print the sum of N numbers
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        temp += i;
    }
    printf("The sum of N numbers is: %d", temp);
}

// 2 WAP to print the sum of first N even numbers
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num * 2; i += 2)
    {
        temp += i;
    }
    printf("The sum of first N even numbers is: %d", temp);
}

// 3 WAP to print the sum of first N odd numbers
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num * 2; i += 2)
    {
        temp += i;
    }
    printf("The sum of first N odd numbers is: %d", temp);
}

// 4 WAP to print the sum of the squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        temp += i * i;
    }
    printf("The sum of squares of the first N natural numbers is: %d", temp);
}

// 5 WAP to print the sum of the cubes of N natural numbers
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        temp += i * i * i;
    }
    printf("The sum of cubes of the first N natural numbers is: %d", temp);
}

// 6 WAP to print the factorial of N natural number
#include<stdio.h>
int main()
{
    int num, temp = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        temp *= i;
    }
    printf("The factorial of the number is: %d", temp);
}

// 7 WAP to check the total number of digits in a given number
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 0)
        temp = 1;
    else    
    {
        while (num != 0)
        {
            num /= 10;
            temp++;
        }
    }
    
    printf("Total digits in the given number is: %d", temp);
}

// 8 WAP to check if the given number is prime or not
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 2)
        printf("Not a prime number");
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            printf("This is a prime number");
        else
            printf("This is not a prime number");
    }
}

// 9 WAP to find the LCM of two numbers
#include<stdio.h>
int main()
{
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    lcm = (num1 > num2) ? num1 : num2;
    
    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            printf("LCM of %d and %d is: %d", num1, num2, lcm);
            break;
        }
        lcm++;
    }
    return 0;
}

// 10 WAP to find the reverse of a number
#include<stdio.h>
int main()
{
    int num, remainder, reversed = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num != 0) 
    {
        remainder = num % 10;           // Extract the last digit
        reversed = reversed * 10 + remainder; // Append to reversed number
        num = num / 10;                 // Remove last digit
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}
