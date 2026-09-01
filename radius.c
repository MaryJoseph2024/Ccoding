#include <stdio.h>
int main() {
    float radius, area, circumference;
    float pi = 3.14159;

    // Prompt user for radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    // Display results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}