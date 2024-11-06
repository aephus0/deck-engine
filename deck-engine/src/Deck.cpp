#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <random>
#include <algorithm>

Deck::Deck() {
	Suit s = Club;
	for (int i = 0, k = 0, j = 2; i < 52; i++, j++, k++) {
		Card card;
		if (k == 13) {
			k = 0;
			j = 2;
			s = static_cast<Suit>(s + 1);
		}
		if (j <= 10) {
			card = Card(j, s, None);
		}
		else {
			if (j == 11) {
				card = Card(j, s, Jack);
			}
			else if (j == 12) {
				card = Card(j, s, Queen);
			}
			else if (j == 13) {
				card = Card(j, s, King);
			}
			else if (j == 14) {
				card = Card(j, s, Ace);
			}
		}
		Deck::InsertCardBottom(card);
	}
	Deck::PrintDeck();
	std::cout << "\n" << std::endl;
	Deck::Shuffle();
}

void Deck::Shuffle() {
//	auto rd = std::random_device{};
	auto rng = std::default_random_engine{ };
	std::shuffle(std::begin(m_cards), std::end(m_cards), rng);
}

void Deck::PrintDeck() {
	for (int i = 0; i < m_cards.size(); i++) {
		Card card = m_cards.at(i);
		std::cout << "Suit: " << static_cast<char>(card.getSuit()) << ", Face: " << static_cast<char>(card.getFace()) << ", Value: " << card.getValue() << std::endl;
	}
}