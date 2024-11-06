#pragma once
#include <vector>
#include "Card.h"
class Deck
{
private:
	std::vector<Card> m_cards;
public:
	Deck();

	void Shuffle();
	void PrintDeck();
	// Card DrawFromTop();

	void InsertCardBottom(Card& card) {
		m_cards.push_back(card);
	}

};

