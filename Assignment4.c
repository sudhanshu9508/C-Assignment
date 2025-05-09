// Assignment 4

// 1 WAP to take three numbers from user and display the sum of digits
#include<stdio.h>
int main()
{
    int num, digit, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 999 || num < 100)
        printf("Please enter a three-digit number: ");
    else
    {
        while (num > 0)
        {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        printf("The sum of the three digits is: %d", sum);
    }
}

// 2 WAP to find the ASCII code of the '+' operator
#include<stdio.h>
int main()
{
    int num = '+';
    printf("The ASCII code of '+' operator is: %d", num);
}

// 3 WAP to find the size of an integer, float, double variable size
#include<stdio.h>
int main()
{
    int num1;
    float num2;
    long double num3;
    printf("The size of Integer type variable: %d", sizeof(num1));
    printf("\nThe size of Float type variable: %d", sizeof(num2));
    printf("\nThe size of Double type variable: %d", sizeof(num3));
}

// 4 WAP to remove the last digit from a given number and at the last location of the digit add 0 (234 --> 230)
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 10)
        printf("Please enter at least a two-digit number: ");
    else
    {
        temp = num % 10;
        num -= temp;
        printf("The last digit changed from the number to 0: %d", num);
    }
}

// 5 WAP to append two variable digits
#include<stdio.h>
int main()
{
    int num1, num2, new;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    new = num1 * 10;
    new += num2;
    printf("The numbers after appending: %d", new);
}

// 6 WAP to convert USD to Indian Rupees (average USD to INR is 83.23)
#include<stdio.h>
int main()
{
    float num;
    printf("Enter the amount in USD: ");
    scanf("%f", &num);
    printf("In Indian Rupees: %f", num * 83.23);
}

// 7 WAP to find the reverse of any number
#include<stdio.h>
int main()
{
    int num, digit = 0, reverse = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;         // Extract the last digit
        reverse = reverse * 10 + digit;  // Append the digit to reverse
        num /= 10;                // Remove the last digit
    }

    // Print the reversed number
    printf("The reversed number is: %d\n", reverse);
}

// 8 WAP to give the output of this question: 10 > 8 > 4
#include<stdio.h>
int main()
{
    int num = 10 > 8 > 4;
    printf("The value is: %d", num);
}

// 9 WAP to give the output of this question: !2 > -2
#include<stdio.h>
int main()
{
    int num = !2 > -2;
    printf("%d", num);
}

// 10 WAP to find the output of this question: 3 < 0 && 5 > 0
#include<stdio.h>
int main()
{
    int val = 3 < 0 && 5 > 0;
    printf("The value of the given expression is: %d", val);
}
