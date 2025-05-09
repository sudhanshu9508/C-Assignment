// Assignment 10
// 1 WAP to program to print which takes number as input and print the number of days in that month
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the month number (1-12): ");
    scanf("%d",&num);
    switch (num)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 days in this month");
        break;
    case 4: case 6: case 9: case 11:
        printf("30 days in this month");
        break;    
    case 2:
        printf("28 or 29 days in this month");
        break;
    default:
        printf("Invalid month number");
        break;
    }
    return 0;
}




// 2 WAP to print the some options 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    float num1, num2;
    while (1)
    {
        printf("\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f%f",&num1,&num2);
            printf("Sum: %.2f\n",num1+num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f%f",&num1,&num2);
            printf("Difference: %.2f\n",num1-num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f%f",&num1,&num2);
            printf("Product: %.2f\n",num1*num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f%f",&num1,&num2);
            if(num2 != 0)
                printf("Division: %.2f\n",num1/num2);
            else
                printf("Cannot divide by zero\n");
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}



// 3 WAP to print the unique greeting and take a number of week 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter a week number (1-7): ");
    scanf("%d",&num);
    srand(time(0));  
    int randomNumber = (rand() % 7) + 1;
    
    switch (num)
    {
    case 1: printf("Monday\n"); break;
    case 2: printf("Tuesday\n"); break;
    case 3: printf("Wednesday\n"); break;
    case 4: printf("Thursday\n"); break;
    case 5: printf("Friday\n"); break;
    case 6: printf("Saturday\n"); break;
    case 7: printf("Sunday\n"); break;
    default: printf("Invalid week number\n");
    }

    switch (randomNumber)
    {
    case 1: printf("Welcome!\n"); break;
    case 2: printf("How are you?\n"); break;
    case 3: printf("Are you happy? 😊\n"); break;
    case 4: printf("Thank you!\n"); break;
    case 5: printf("Please complete the Assignment\n"); break;
    case 6: printf("Hey!\n"); break;
    case 7: printf("Hey, Bro!\n"); break;
    }
    return 0;
}



// 4 WAP to check triangle type
#include <stdio.h>

int isValidTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int isRightTriangle(int a, int b, int c) {
    return (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a);
}

int isEquilateral(int a, int b, int c) {
    return (a == b) && (b == c);
}

int main() {
    int a, b, c, choice;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (!isValidTriangle(a, b, c)) {
        printf("Invalid triangle!\n");
        return 0;
    }

    printf("\n1. Check if Right-Angled\n2. Check if Equilateral\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (isRightTriangle(a, b, c))
                printf("Right-Angled Triangle\n");
            else
                printf("Not Right-Angled\n");
            break;
        case 2:
            if (isEquilateral(a, b, c))
                printf("Equilateral Triangle\n");
            else
                printf("Not Equilateral\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}



// 5 WAP to print some statement using switch case
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number (1-3): ");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("Good\n"); break;
        case 2: printf("Better\n"); break;
        case 3: printf("Best\n"); break;
        default: printf("Invalid\n");
    }
    return 0;
}




// 6 WAP to check the grade of a student
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d",&marks);
    
    if(marks < 0 || marks > 100) {
        printf("Invalid marks\n");
        exit(0);
    }

    switch (marks/10)
    {
    case 10: // falls through to case 9
    case 9:  printf("Grade: A\n"); break;
    case 8:  printf("Grade: B\n"); break;
    case 7:  printf("Grade: C\n"); break;
    case 6:  printf("Grade: D\n"); break;
    case 5:  printf("Grade: E\n"); break;
    default: printf("Grade: F (Fail)\n"); // handles 0-49
    }
    return 0;
}




// 7 WAP with multiple options
#include <stdio.h>
#define PI 3.14

int main() {
    int choice, num, i, sum, fact = 1;
    float radius, area;

    while(1) {
        printf("\n1. Factorial\n2. Even/Odd\n3. Area of Circle\n4. Sum of N numbers\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                if(num < 0) {
                    printf("Invalid input\n");
                    break;
                }
                for(i = 1; i <= num; i++)
                    fact *= i;
                printf("Factorial: %d\n", fact);
                break;
                
            case 2:
                printf("Enter number: ");
                scanf("%d", &num);
                if(num % 2 == 0)
                    printf("Even\n");
                else
                    printf("Odd\n");
                break;
                
            case 3:
                printf("Enter radius: ");
                scanf("%f", &radius);
                if(radius < 0) {
                    printf("Invalid radius\n");
                    break;
                }
                area = PI * radius * radius;
                printf("Area: %.2f\n", area);
                break;
                
            case 4:
                printf("Enter N: ");
                scanf("%d", &num);
                if(num < 1) {
                    printf("Invalid input\n");
                    break;
                }
                sum = num * (num + 1) / 2;
                printf("Sum: %d\n", sum);
                break;
                
            case 5:
                exit(0);
                
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}



// 8 WAP to check character type
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase alphabet\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase alphabet\n");
    else if(ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");
    return 0;
}




// 9 WAP to check vowel, consonant or special character
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        switch(ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("Vowel\n");
                break;
            default:
                printf("Consonant\n");
        }
    }
    else {
        printf("Special character\n");
    }
    return 0;
}




// 10 WAP with multiple options
#include<stdio.h>
int main()
{
    int choice, num, temp, sum = 0, i;
    float l, b, h;
    
    while(1) {
        printf("\n1. LCM\n2. Sum of digits\n3. Volume of cuboid\n4. Prime check\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: {
                int a, b, gcd, lcm;
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                
                // Calculate GCD
                int x = a, y = b;
                while(y != 0) {
                    temp = y;
                    y = x % y;
                    x = temp;
                }
                gcd = x;
                lcm = (a * b) / gcd;
                printf("LCM: %d\n", lcm);
                break;
            }
                
            case 2:
                printf("Enter number: ");
                scanf("%d", &num);
                sum = 0;
                while(num > 0) {
                    sum += num % 10;
                    num /= 10;
                }
                printf("Sum of digits: %d\n", sum);
                break;
                
            case 3:
                printf("Enter length, breadth, height: ");
                scanf("%f%f%f", &l, &b, &h);
                printf("Volume: %.2f\n", l * b * h);
                break;
                
            case 4:
                printf("Enter number: ");
                scanf("%d", &num);
                if(num < 2) {
                    printf("Not prime\n");
                    break;
                }
                temp = 1; // assume prime
                for(i = 2; i <= num/2; i++) {
                    if(num % i == 0) {
                        temp = 0;
                        break;
                    }
                }
                if(temp)
                    printf("Prime\n");
                else
                    printf("Not prime\n");
                break;
                
            case 5:
                exit(0);
                
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}