#include "main.h"

/**
 * *swap_int - swaps the values of twointegers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
        int changed;

        changed = *a;
        *a = *b;
        *b = changed;
}
