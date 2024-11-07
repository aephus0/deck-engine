#pragma once
#include <string>
#include <vector>
#include "Card.h"
#include "Deck.h"

class Player
{
private:
	std::string m_playerName{};
	std::vector<Card> m_hand{};

public:
	Player() = default;
	Player(std::string name) : m_playerName{ name } {};
	Player(std::string name, Deck& deck, uint8_t nrOfCards) : m_playerName{ name } {
		for (int i = 0; i < nrOfCards; i++) {
			m_hand.push_back(deck.DrawFromTop());
		}
	}

	void drawCard(Deck& deck) { m_hand.push_back(deck.DrawFromTop()); }
};

