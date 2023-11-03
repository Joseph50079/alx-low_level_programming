#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int n;

    ht = hash_table_create(1024);
    n = hash_table_set(ht, "betty", "cool");
    printf("%i\n", n);
    return (EXIT_SUCCESS);
}
