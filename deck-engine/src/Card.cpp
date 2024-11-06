#include "Card.h"

Card::Card() {}
Card::Card(int value, Suit suit, Face face) : m_value{ value }, m_suit{ suit }, m_face{ face } {}