// fahrenheit.c
// This program converts a temperature from Fahrenheit to Celsius.
// The formula for conversion is: C = (F - 32) * 5 / 9


#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Prompt the user for input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the result
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}