#include <stdio.h>


#include <stdio.h>

void print_binary(unsigned long int n)
{
    // Number of bits in an unsigned long int
    int num_bits = sizeof(unsigned long int) * 8;
    printf("%i\n", num_bits);
    // Start from the most significant bit
    for (int i = num_bits - 1; i >= 0; i--)
    {
        // Use bitwise shift to isolate each bit
        unsigned long int bit = (n >> i) & 1;

        // Print the isolated bit
        printf("%lu", bit);
    }

    printf("\n");
}

void main() {
    unsigned long int num = 10244;
    print_binary(num);
    return;
}
