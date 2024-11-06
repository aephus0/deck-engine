#pragma once

enum Face {None = 'N', Jack = 'J', Queen = 'Q', King = 'K', Ace = 'A' };
enum Suit {Club = 'C', Diamond = 'D', Heart = 'H', Spade = 'S' };

class Card
{
private:
	int m_value;
	Suit m_suit;
	Face m_face;
public:
	Card();
	Card(int value, Suit suit, Face face);

	int getValue() const {
		return m_value;
	}

	Suit getSuit() const {
		return m_suit;
	}

	Face getFace() const {
		return m_face;
	}

};

