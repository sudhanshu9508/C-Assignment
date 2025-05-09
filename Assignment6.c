// Assignment 6
// 1 WAP to find if the number is three-digit or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 99 && num < 1000)
        printf("The number is a three-digit number.\n");
    else
        printf("The number is not a three-digit number.\n");
}

// 2 WAP to find the total profit in percentage by taking cost price and selling price
#include<stdio.h>
int main()
{
    float cost, sell, prof;
    printf("Enter the cost price: ");
    scanf("%f", &cost);
    printf("Enter the selling price: ");
    scanf("%f", &sell);
    prof = ((sell - cost) * 100) / cost;
    printf("Total profit is: %.2f%%\n", prof);
}

// 3 WAP to take the marks of five subjects and check if the student passes the exam or not (passing marks is 33)
#include<stdio.h>
int main()
{
    float marks[5], per = 0, temp = 0, total = 0;
    printf("Enter the marks of Math: ");
    scanf("%f", &marks[0]);
    printf("Enter the marks of Science: ");
    scanf("%f", &marks[1]);
    printf("Enter the marks of English: ");
    scanf("%f", &marks[2]);
    printf("Enter the marks of Computer Science: ");
    scanf("%f", &marks[3]);
    printf("Enter the marks of SST: ");
    scanf("%f", &marks[4]);
    
    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
        if (marks[i] < 33)
        {
            temp++;
        }
    }

    per = (total * 100) / 500;

    if (temp > 0)
        printf("You failed in %d subject(s).\n", (int)temp);
    else
        printf("You passed and scored %.2f%%.\n", per);
}

// 4 WAP to find if the given character is in uppercase or lowercase
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Given character is in Uppercase.\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Given character is in Lowercase.\n");
    else
        printf("Invalid input.\n");
}

// 5 WAP to check if the given number is divisible by both 2 and 3
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0)
        printf("Number is divisible by 2 and 3.\n");
    else
        printf("Number is not divisible by 2 and 3.\n");
}

// 6 WAP to check if the given number is divisible by 7 or 3
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 3 == 0)
        printf("The number is divisible by 7 or 3.\n");
    else
        printf("The number is not divisible by 7 or 3.\n");
}

// 7 WAP to check if the given number is positive, negative, or zero
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("The number is 0.\n");
    else if (num > 0)
        printf("The number is positive.\n");
    else
        printf("The number is negative.\n");
}

// 8 WAP to check if the input is an uppercase alphabet, lowercase alphabet, number, or special symbol
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("You entered a number.\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("You entered an uppercase alphabet.\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("You entered a lowercase alphabet.\n");
    else
        printf("You entered a special symbol.\n");
}

// 9 WAP to check if a triangle is valid or not
#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
        printf("Triangle is valid.\n");
    else
        printf("Triangle is not valid.\n");
}

// 10 WAP to take the month number and print the total days in that month
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the month number: ");
    scanf("%d", &num);

    if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12)
        printf("Days in this month: 31 days.\n");
    else if (num == 2)
        printf("Days in this month: 28 days.\n");
    else if (num == 4 || num == 6 || num == 9 || num == 11)
        printf("Days in this month: 30 days.\n");
    else
        printf("Invalid month number.\n");
}
