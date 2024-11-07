#pragma once

enum Face {None = 'N', Jack = 'J', Queen = 'Q', King = 'K', Ace = 'A' };
enum Suit {Club, Diamond, Heart, Spade};

class Card
{
private:
	int m_value{};
	Suit m_suit{};
	Face m_face{};
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

	char getSuitChar() const {
		switch (m_suit)
		{
		case Club:
			return 'C';
			break;
		case Diamond:
			return 'D';
			break;
		case Heart:
			return 'H';
			break;
		case Spade:
			return 'S';
			break;
		default:
			return 'N';
			break;
		}
	}

};

