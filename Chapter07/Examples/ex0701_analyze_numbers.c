
/*
 * 7.3 - Case Study: Analyzing Numbers.
 * The problem is to write a program that:
 * - Reads an integer N > 0 from console,
 * - Enter N floating point numbers from console and store them in an array.
 * - Computes the average of entered numbers
 * - Count the number of items in array above the average computed.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    /* Enter an integer N > 0 */
    int n = 0;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("%d is an invalid value\n", n);
        return (EXIT_FAILURE);
    }

    /* Enter N floating point numbers. */
    double* numbers = (double*)calloc(n, sizeof (double));
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &numbers[i]);
    }

    /* Computes the average of entered values. */
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }
    double average = sum / n;

    /* Count items above the average. */
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > average)
        {
            count++;
        }
    }

    /* Show results */
    printf("Average is: %.2lf\n", average);
    printf("Number of elements above average: %d\n", count);

    return (EXIT_SUCCESS);
}
