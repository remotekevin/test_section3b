#include <stdio.h>

// Define constants (if necessary)
// Example: #define PI 3.14159265358979323846

// Function declarations
void greet(void);                    // Student 1
int add(int a, int b);               // Student 2
int subtract(int a, int b);          // Student 3
double calculateArea(double radius); // Student 4
unsigned long factorial(int n); // Student 5
void displayMenu(void);             // Student 6

int main(void) {
    // Variable declarations
    int choice = 5;
    char input[100]; // For safer input handling

    // Display a welcome message
    printf("Welcome to the Collaborative Code Management Program!\n");

    // Call the display_menu() function
    displayMenu();

    // Accept user input for menu selection
    printf("\nEnter your choice: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Parse the input (placeholder)
        // Example: sscanf_s(input, "%d", &choice);
    }

    // Use a switch-case to handle menu options
    switch (choice) {
    case 1:
        greet(); // Call greet function
        break;
    case 2:
        // Call add function (placeholder)
        break;
    case 3:
        // Call subtract function (placeholder)
        break;
    case 4:
        // Call calculate_area function (placeholder)
        break;
    case 5:
        // Call factorial function (placeholder)
        printf("This is only test");
        
        //
        // Reference from the SENG1070 course material
        // Declare a function pointer
        unsigned long long (*funcPtr)(int, int);

        // Assign the address of exampleFunction to the function pointer
        funcPtr = factorial;

        // Use the function pointer to call the function 
        int result = funcPtr(5, 4);

        printf("result:%ld\n", result);
        //printf("result:%ld\n", 5*4*3*2*1);
                    
            
        break;
    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }

    return 0;
}

// Function definitions (placeholders)

// Student 1: Implement greet() function
void greet(void) {
    // Placeholder
}

// Student 2: Modify add() function to take user input
int add(int a, int b) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 3: Complete subtract() function
int subtract(int a, int b) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 4: Implement calculate_area() function
double calculateArea(double radius) {
    // Placeholder
    return 0.0; // Replace with actual logic
}

// Student 5: Develop factorial() function

    // Placeholder
    // C program to Find the Factorial Using for Loop
        // source from the geeksforgeeks.org
        // Find Factorial of a Number Using for Loop
        // 
        // https://www.geeksforgeeks.org/c-program-for-factorial-of-a-number/

    unsigned long factorial(int n) {
        int fact_function = 1, count;

        // Loop from 1 to N to get the factorial
        for (count = 1; count <= n; count++) {
            fact_function *= count;
        }

        return fact_function;
    }

//        return 0; // Replace with actual logic
// }

// Student 6: Implement display_menu() function
void displayMenu(void) {
    // Placeholder
    printf("Menu:\n");
    printf("1. Greet\n");
    printf("2. Add two numbers\n");
    printf("3. Subtract two numbers\n");
    printf("4. Calculate the area of a circle\n");
    printf("5. Calculate the factorial of a number\n");
}