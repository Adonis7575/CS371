#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int total = 0;

    // Loop through the command-line arguments starting from index 1
    for (int i = 1; i < argc; i++) {
        char *endptr;
        int num = strtol(argv[i], &endptr, 10);

        if (*endptr != '\0') {
            printf("Error: argument %d is not an integer\n", i);
            return 1;
        }
        // Alternate addition and subtraction based on the argument's position
        total += (i % 2 == 1) ? num : -num;
    }

    printf("The total is: %d\n", total);
    return 0;
}
