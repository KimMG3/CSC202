#include <iostream>

struct Card {
    int rank;
    int suit;
};

// Free standing function to compare two Card objects for equality
bool equals(const Card& c1, const Card& c2) {
    return (c1.rank && c1.suit == c2.suit);
}

int main() {
    Card card1 = {1, 11}; // Create the first card with rank 1 and suit 11
    Card card2 = {1, 11}; // Create the second card with rank 1 and suit 11

    // Check if the cards are equal using the equals function
    if (equals(card1, card2)) {
        std::cout << "Yup, that's the same card" << std::endl;
    }

    return 0;
}
