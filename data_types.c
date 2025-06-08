#include <stdio.h>

int main() {
    // Integer types
    int a = 10;           // int: typically 4 bytes
    short b = 20;         // short int: 2 bytes
    long c = 100000L;     // long int: 4 or 8 bytes (use 'L' for long literal)

    // Floating-point types
    float x = 3.14f;      // float: 4 bytes, 'f' suffix is needed for literals
    double y = 3.141592;  // double: 8 bytes, more precision than float

    // Character type
    char ch = 'A';        // char: 1 byte, stores a single character

    // Print them
    printf("int: %d\n", a);        // %d = decimal int
    printf("short: %d\n", b);      // %d also works for short
    printf("long: %ld\n", c);      // %ld = long decimal
    printf("float: %.2f\n", x);    // %.2f = float with 2 digits after decimal
    printf("double: %.6lf\n", y);  // %.6lf = double with 6 digits after decimal
    printf("char: %c\n", ch);      // %c = character

    return 0;
}
