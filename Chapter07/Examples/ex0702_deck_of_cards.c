
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS_PER_DECK (52)
#define CARDS_PER_SUIT (13)
#define CARDS_PER_HAND (4)

const char* g_ranks[] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
const char* g_suits[] = {"Clubs", "Hearts", "Spades", "Diamonds"};

int main(int argc, char* argv[])
{
    /* Create the standar deck of card representation (as array of integers 0..52)*/
    int std_deck[CARDS_PER_DECK] = {0};
    for (int i = 0; i < CARDS_PER_DECK; i++)
    {
        std_deck[i] = i;
    }

    /* Shuffle the elements in array. */
    srand(time(NULL));
    for (int i = 0; i < CARDS_PER_DECK; i++)
    {
        int j = rand() % CARDS_PER_DECK;
        int temp = std_deck[i];
        std_deck[i] = std_deck[j];
        std_deck[j] = temp;
    }

    /* Get a hand from shuffled cards. */
    int hand[CARDS_PER_HAND] = {0};
    for (int i = 0; i < CARDS_PER_HAND; i++)
    {
        hand[i] = std_deck[i];
    }

    /* Show hand. */
    for (int i = 0; i < CARDS_PER_HAND; i++)
    {
        const char* rank = g_ranks[hand[i] % CARDS_PER_SUIT];
        const char* suit = g_suits[hand[i] / CARDS_PER_SUIT];
        printf("Card %d: %s of %s\n", hand[i], rank, suit);
    }
    
    return (EXIT_SUCCESS);
}
