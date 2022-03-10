#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef enum {SPADES = 1, CLUBS, DIAMONDS, HEARTS} suittype;
typedef enum {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING } ranktype;

typedef struct {
    suittype suit;      // 1 to 4
    ranktype rank;      // 1 to 13
} cardtype;

const int DECK_SIZE = 52; //52 cards
const int RANK_SIZE = 13;

//Function to init all cards in standard order
void init(cardtype cards[]) {
    for (int i = 0; i < DECK_SIZE; i++) {
        cards[i].suit = i / RANK_SIZE + 1; // make 13 cards in the same suit
        cards[i].rank = i % RANK_SIZE + 1; 
        /* It will be initialized as below:
        spades: ace - two - three - ... - king, 
        clubs: ace - two - three - ... - king
        .....
        */
    }
}

//Function to convert rank number to string
char *ranktostr(ranktype rank, char *str) {
    const char *ranks[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", 
                           "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    strcpy(str, ranks[rank - 1]);
    return str;
}

//Function to convert suit number to string
char *suittostr(suittype suit, char *str) {
    const char *suits[] = {"Spades", "Clubs", "Diamonds", "Hearts"};
    strcpy(str, suits[suit - 1]);
    return str;
}

void deal_the_cards(cardtype player_cards[], cardtype cards[]) {
    srand(time(NULL));
    
    int size = 3; 
    for (int i = 0; i < size; i++) {
        int card_index = rand() % DECK_SIZE;

        // if the card is picked before, get other different random card
        while (cards[card_index].suit == 0 && cards[card_index].rank == 0) {
            card_index = rand() % DECK_SIZE;
        }

        player_cards[i] = cards[card_index];

        // remove the card that is already picked from the deck
        cards[card_index].suit = 0;
        cards[card_index].rank = 0;
    }
}

//Function to print out info of all player cards
void print_player_cards(cardtype player_cards[]) {
    const int RANK_STR_SIZE = 6;
    const int SUIT_STR_SIZE = 9;
    char rankstr[RANK_STR_SIZE], suitstr[SUIT_STR_SIZE];

    int size = 3; 
    for (int i = 0; i < size; i++) {
        printf("%s of %s\n", ranktostr(player_cards[i].rank, rankstr), suittostr(player_cards[i].suit, suitstr));
    }
}

int get_score(cardtype player_cards[]) {
    int score = 0;
    
    int size = 3;
    for (int i = 0; i < size; i++) {
        if (player_cards[i].rank > 10) { // if ranks are Jack, Queen, King, the added score is 10
            score += 10;
            continue;
        }

        score += player_cards[i].rank;
    }

    return score % 10;
}

void check_card(cardtype player_cards1[], cardtype player_cards2[]) {
    int score1 = get_score(player_cards1);
    int score2 = get_score(player_cards2);
    if (score1 > score2) {
        printf("Player 1 win with score %d\n", score1);
    } else if (score1 < score2) {
        printf("Player 2 win with score %d\n", score2);
    } else {
        printf("Draw with score %d!!!\n", score1);
    }
}

int main(){
    cardtype cards[DECK_SIZE];
    init(cards);

    cardtype cards_of_player1[3] = {};
    deal_the_cards(cards_of_player1, cards);

    printf("Cards of player 1:\n");
    print_player_cards(cards_of_player1);

    cardtype cards_of_player2[3] = {};
    deal_the_cards(cards_of_player2, cards);

    printf("Cards of player 2:\n");
    print_player_cards(cards_of_player2);

    check_card(cards_of_player1, cards_of_player2);

    return 0;
}