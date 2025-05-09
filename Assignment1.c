// Assignment 1

// 1. Print Hello Students
#include <stdio.h>
int main() {
    printf("Hello Students\n");
    return 0;
}

// 2. Print Hello in the first line and Student in the second line
#include <stdio.h>
int main() {
    printf("Hello\nStudent\n");
    return 0;
}

// 3. Print "MySirG" with double quotes
#include <stdio.h>
int main() {
    printf("\"MySirG\"\n");
    return 0;
}

// 4. Print \n on the screen
#include <stdio.h>
int main() {
    printf("\\n\n");
    return 0;
}

// 5. Print \t on the screen
#include <stdio.h>
int main() {
    printf("\\t\n");
    return 0;
}

// 6. Print "Teacher's Day" with double quotes
#include <stdio.h>
int main() {
    printf("\"Teacher's Day\"\n");
    return 0;
}

// 7. Print the sum of two user-entered numbers
#include <stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum is: %d\n", sum);
    return 0;
}

// 8. Print the square of a number
#include <stdio.h>
int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("The square of the number is: %.2f\n", num * num);
    return 0;
}

// 9. Calculate the area of a rectangle
#include <stdio.h>
int main() {
    float length, breadth;
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the breadth: ");
    scanf("%f", &breadth);
    printf("The area of the rectangle is: %.2f\n", length * breadth);
    return 0;
}

// 10. Calculate the area of a circle
#include <stdio.h>
int main() {
    float radius, area;
    float PI = 3.14;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}