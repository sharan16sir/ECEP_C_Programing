#include <stdio.h>

int main() {
    int val, par, count = 0;

    // Input a value
    printf("Enter an integer: ");
    scanf("%d", &val);

    // Loop through the bits (0 to 30)
    for (int i = 0; i < 31; i++) {
        par = val & (1 << i); // Check if the i-th bit is set
        if (par > 0) {
            count++; // Increment the count of set bits
        }
    }

    // Output the count of set bits
    printf("Number of set bits = %d\n", count);

    // Check the parity of the set bit count
    int n = count & 1; // Check if the count is odd (1) or even (0)
    if (n > 0) {
        printf("Bit parity is odd\n");
    } else {
        printf("Bit parity is even\n");
    }

    return 0;
}