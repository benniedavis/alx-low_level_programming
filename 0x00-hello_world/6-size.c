#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
    printf("Size of a char: %d byte(s)\n", sizeof(char));
    printf("Size of aint: %d byte(s)\n", sizeof(int));
    printf("Size of long int: %d byte(s)\n", sizeof(long int));
    printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
    printf("Size of floatt: %d byte(s)\n", sizeof(float));
    return (0);
}

