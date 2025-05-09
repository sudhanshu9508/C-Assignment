// Assignment 11
// 1. WAP to calculate the area of the circle
#include <stdio.h>
#define PI 3.14

int main() {
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    float area = PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}




// 2. WAP to find the simple interest
#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest is: %.2f\n", simple_interest);
    return 0;
}



// 3. WAP to check if the number is even or odd
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    return 0;
}



// 4. WAP to print first N natural numbers
#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}



// 5. WAP to print first N odd numbers
#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n * 2; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}



// 6. WAP to print factorial of a number
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %llu\n", num, factorial);
    }
    return 0;
}





// 7. WAP to calculate number of combinations (nCr)
#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if (r > n || n < 0 || r < 0)
        printf("Invalid input.\n");
    else {
        unsigned long long nCr = factorial(n) / (factorial(r) * factorial(n - r));
        printf("nCr = %llu\n", nCr);
    }
    return 0;
}




// 8. WAP to calculate number of arrangements (nPr)
#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if (r > n || n < 0 || r < 0)
        printf("Invalid input.\n");
    else {
        unsigned long long nPr = factorial(n) / factorial(n - r);
        printf("nPr = %llu\n", nPr);
    }
    return 0;
}



// 9. WAP to check if a digit exists in a number
#include <stdio.h>

int main() {
    int num, digit, temp, found = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the digit to find: ");
    scanf("%d", &digit);
    temp = num;
    while (temp > 0) {
        if (temp % 10 == digit) {
            found = 1;
            break;
        }
        temp /= 10;
    }
    if (found)
        printf("Digit %d is present in %d.\n", digit, num);
    else
        printf("Digit %d is not present in %d.\n", digit, num);
    return 0;
}





// 10. WAP to print prime factors of a number
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    if (num > 2)
        printf("%d", num);
    printf("\n");
    return 0;
}
