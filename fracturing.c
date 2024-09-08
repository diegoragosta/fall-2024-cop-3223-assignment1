//********************************************************
// fracturing.c
// Author: Diego Ragosta
// Class: COP 3223, Professor Parra
// Purpose: The purpose of this program is to use fracturing to refrain from putting everything in the main function.
// We will be taking distance to find perimeter, area, width, and height.
// Input: x1, x2, y1, and y2 variables
//
// Output: Solutions to the equations and points given (to the command line) 
// //********************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Helper function to allow calculations to work without repeating inputs
double calculateSqrt(double x1, double x2, double y1, double y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
// Function to get user input for a double value
double askForUserInput() {
    double value;
    printf("Enter your x1, x2, y1, and y2: ");
    scanf("%lf", &value);
    return value;
}

// Calculate distance between two points
double calculateDistance() {
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    double distance = calculateSqrt(x1, x2, y1, y2);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance betweem the points is %.1f\n", distance);

    return distance;
}

// Calculate perimeter of a circle
double calculatePerimeter() {
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    //Equation for finding perimeter with distance
    double distance = calculateSqrt(x1, x2, y1, y2);
    double diameter = distance;
    double radius = diameter / 2;
    double perimeter = 2 * PI * radius;

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return perimeter;
}

// Calculate area of a circle
double calculateArea() {
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    //Equations for finding area with distance
    double diameter = calculateSqrt(x1, x2, y1, y2);
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    return area;
}

// Calculate width of a circle
double calculateWidth() {
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    //Equation for horizontal distance between points
    double width = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    return 2.0;
}

// Calculate height of a circle
double calculateHeight() {
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    // Equation for vertical distance between the points
    double height = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    return 2.0;
}

// Main function to call other functions
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}






