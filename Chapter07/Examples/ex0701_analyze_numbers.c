
/*
 * 7.3 - Case Study: Analyzing Numbers.
 * The problem is to write a  program that finds the number of items
 * above the average of all items.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int n = 0;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    double* numbers = (double*)calloc(n, sizeof (double));
    double sum = 0.0;

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }
    double average = sum / n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > average)
        {
            count++;
        }
    }

    printf("Average is: %.3lf\n", average);
    printf("Number of elements above average: %d\n", count);
    return (EXIT_SUCCESS);
}
