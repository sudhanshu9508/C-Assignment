// Assignment 8
// 1 WAP to print "MySirG" N times on the screen
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("MySirG\n");
    }
}
 
// 2 WAP to print the first N natural numbers
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}

// 3 WAP to print the N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}

// 4 WAP to print the N natural odd numbers
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= (2 * num - 1); i += 2)
    {
        printf("%d\n", i);
    }
}

// 5 WAP to print the N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = (2 * num - 1); i >= 1; i -= 2)
    {
        printf("%d\n", i);
    }
}

// 6 WAP to print the N even natural numbers
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i * 2);
    }
}

// 7 WAP to print the N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = num * 2; i >= 2; i -= 2)
    {
        printf("%d\n", i);
    }
}

// 8 WAP to print the square of the N natural numbers
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i * i);
    }
}

// 9 WAP to print the cube of the N natural numbers
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i * i * i);
    }
}

// 10 WAP to print the table of N number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}
