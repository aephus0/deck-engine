#pragma once
#include <vector>
#include <Queue>
#include "Card.h"
class Deck
{
private:
	std::vector<Card> m_cards{};
	std::queue<Card> m_pile{};
public:
	Deck();

	void Shuffle();
	void PrintDeck();

	Card& DrawFromTop() {
		return m_pile.front();
	}

	void InsertCardBottom(Card& card) {
		m_pile.push(card);
	}
};

