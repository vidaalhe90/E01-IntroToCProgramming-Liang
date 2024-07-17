
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALPHABET_SIZE ('z' - 'a' + 1)
#define NUM_RANDOM_CHARS (100)

int main(int argc, char* argv[])
{
    char random_letters[NUM_RANDOM_CHARS] = {'\0'};

    srand(time(NULL));
    for (int i = 0; i < NUM_RANDOM_CHARS; i++)
    {
        random_letters[i] = 'a' + (rand() % ALPHABET_SIZE);
    }

    int counters[ALPHABET_SIZE] = {0};
    for (int i = 0; i < NUM_RANDOM_CHARS; i++)
    {
        counters[random_letters[i] - 'a']++;
    }

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        printf("Letter '%c': %d times\n", ('a' + i), counters[i]);
    }

    return (EXIT_SUCCESS);
}
