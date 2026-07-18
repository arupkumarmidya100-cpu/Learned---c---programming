#include <stdio.h>

// Define a structure to hold driver details
struct Driver {
    char name[50];
    char license[20];
    char route[100];
    float kms;
};

int main() {
    int n;

    printf("Enter the number of drivers: ");
    scanf("%d", &n);

    struct Driver drivers[n]; // Array of structures

    // Input driver details
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Driver %d ---\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", drivers[i].name); // Read string with spaces
        printf("Driving License Number: ");
        scanf(" %[^\n]", drivers[i].license);
        printf("Route: ");
        scanf(" %[^\n]", drivers[i].route);
        printf("Kilometers Driven: ");
        scanf("%f", &drivers[i].kms);
    }

    // Display driver details
    printf("\n========== Driver Details ==========\n");
    for (int i = 0; i < n; i++) {
        printf("\nDriver %d:\n", i + 1);
        printf("Name: %s\n", drivers[i].name);
        printf("License: %s\n", drivers[i].license);
        printf("Route: %s\n", drivers[i].route);
        printf("Kilometers: %.2f km\n", drivers[i].kms);
    }

    return 0;
}