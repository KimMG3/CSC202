#include <iostream>
#include <vector>

struct Card {
    int rank;
    int suit;
};

class Deck {
    std::vector<Card> deck;

public:
    // Member function to find a card within the deck
    int find_card(const Card& card) const{
        for (int i = 0; i < deck.size(); i++) {
            if (deck[i].rank == card.rank && deck[i].suit == card.suit)
                return i; // Return the index if the card is found
        }
        return -1; // Return -1 if the card is not found
    }

    // Member function to build the deck of cards
    std::vector<Card> build_deck() {
        // Code to build the deck of cards
        std::vector<Card> deck;
        return deck;
    }
};

int main() {
    Deck deck;
    std::vector<Card> deckCards = deck.build_deck(); // Build the deck of cards
    int index = deck.find_card(deckCards[17]); // Find the card at index 17 in the deck

    std::cout << "Your card was found at index " << index << "." <<std::endl;

    return 0; 
}
