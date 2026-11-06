// fahrenheit-loop.c
// This program converts temperatures from Fahrenheit to Celsius in a loop.
// The user can enter multiple temperatures, and the program will continue until the user decides to stop

#include <stdio.h>

int main() {
  
    float fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;

    printf("Fahrenheit to Celsius conversion table:\n");
    printf("Fahrenheit\tCelsius\n");

    while(fahrenheit <= upper) {
        celsius = (5.0 * (fahrenheit - 32.0)) / 9.0;
        printf("%3.0f \t\t%6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }

    return 0;
}