// Assignment 2

// 1. Calculate Average of Three Integers
#include <stdio.h>
int main() {
    int num1, num2, num3;
    float avg;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    avg = (num1 + num2 + num3) / 3.0;
    printf("The average of the numbers is: %.2f\n", avg);
    return 0;
}

// 2. Calculate Circumference of a Circle
#include <stdio.h>
int main() {
    float PI = 3.14, rad, cir;
    printf("Enter the radius: ");
    scanf("%f", &rad);
    cir = 2 * PI * rad;
    printf("The circumference is: %.2f\n", cir);
    return 0;
}

// 3. Calculate Simple Interest
#include <stdio.h>
int main() {
    float amount, rate, time, simplein;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("Enter the time: ");
    scanf("%f", &time);
    simplein = (amount * rate * time) / 100;
    printf("The simple interest is: %.2f\n", simplein);
    return 0;
}

// 4. Calculate Volume of a Cuboid
#include <stdio.h>
int main() {
    float len, bre, hei, vol;
    printf("Enter the length: ");
    scanf("%f", &len);
    printf("Enter the breadth: ");
    scanf("%f", &bre);
    printf("Enter the height: ");
    scanf("%f", &hei);
    vol = len * bre * hei;
    printf("The volume of the cuboid is: %.2f\n", vol);
    return 0;
}

// 5. Calculate Profit for 25 Bananas
#include <stdio.h>
int main() {
    float cost, sell, cost_perbanana, sell_perbanana, profit;
    printf("Enter the cost price of 1 dozen bananas: ");
    scanf("%f", &cost);
    printf("Enter the selling price of 1 dozen bananas: ");
    scanf("%f", &sell);

    cost_perbanana = cost / 12;
    sell_perbanana = sell / 12;
    profit = (sell_perbanana - cost_perbanana) * 25;

    if (profit >= 0)
        printf("The profit for 25 bananas is: %.2f\n", profit);
    else
        printf("The loss for 25 bananas is: %.2f\n", -profit);

    return 0;
}

// 6. Print ASCII Code of a Character
#include <stdio.h>
int main() {
    char character;
    printf("Enter the character: ");
    scanf(" %c", &character);
    printf("The ASCII code of '%c' is: %d\n", character, character);
    return 0;
}

// 7. Print Character from ASCII Code
#include <stdio.h>
int main() {
    int ascii;
    printf("Enter the ASCII code: ");
    scanf("%d", &ascii);
    printf("The character for ASCII code %d is: %c\n", ascii, ascii);
    return 0;
}

// 8. Print ASCII of Three Characters
#include <stdio.h>
int main() {
    char ch1, ch2, ch3;
    printf("Enter three characters: ");
    scanf(" %c %c %c", &ch1, &ch2, &ch3);
    printf("Character\tASCII\n");
    printf("%c\t\t%d\n", ch1, ch1);
    printf("%c\t\t%d\n", ch2, ch2);
    printf("%c\t\t%d\n", ch3, ch3);
    return 0;
}

// 9. Extract Day, Month, Year from Date (DD/MM/YYYY)
#include <stdio.h>
int main() {
    char date[11];
    printf("Enter date (DD/MM/YYYY): ");
    scanf("%s", date);
    if (date[2] == '/' && date[5] == '/') {
        printf("Day - %c%c\n", date[0], date[1]);
        printf("Month - %c%c\n", date[3], date[4]);
        printf("Year - %c%c%c%c\n", date[6], date[7], date[8], date[9]);
    } else {
        printf("Invalid format. Use DD/MM/YYYY.\n");
    }
    return 0;
}

// 10. Extract Hour and Minute from Time (HH:MM)
#include <stdio.h>
int main() {
    char time[6];
    printf("Enter time (HH:MM): ");
    scanf("%s", time);
    if (time[2] == ':') {
        printf("%c%c hour and %c%c minute\n", time[0], time[1], time[3], time[4]);
    } else {
        printf("Invalid format. Use HH:MM.\n");
    }
    return 0;
}
