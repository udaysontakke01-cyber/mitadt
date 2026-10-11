
#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2;
    int result;

    // Demonstrating operator precedence
    result = a + b * c;
    printf("a + b * c = %d\n", result);

    // Demonstrating associativity
    result = a - b - c;
    printf("a - b - c = %d\n", result);

    // Demonstrating parentheses
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result);

    return 0;
}
