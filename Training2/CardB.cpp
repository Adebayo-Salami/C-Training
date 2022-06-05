#include "CardB.h"

void CardB::add_new_deck()
{
	int S = 1;
	while (S <= 13)
		cards.push_back({ get_card_rank(S--), "SPADE", 'S' });

	int H = 1;
	while (H <= 13)
		cards.push_back({ get_card_rank(H--), "HEART", 'H' });

	int C = 1;
	while (C <= 13)
		cards.push_back({ get_card_rank(C--), "CLOVER", 'C' });

	int D = 1;
	while (D <= 13)
		cards.push_back({ get_card_rank(D--), "DIAMOND", 'D' });
}

std::string CardB::get_card_rank(int level)
{
	if (level == 1) return "A";
	if (level == 11) return "J";
	if (level == 12) return "Q";
	if (level == 13) return "K";
	return std::to_string(level);
}

CardB::CardB()
{
	add_new_deck();
}

CardB::~CardB()
{
	cards.clear();
}

void CardB::shuffle_deck()
{
	std::shuffle(std::begin(cards), std::end(cards), rng);
}

const CardInfo & CardB::deal_card()
{
	auto card_dealed = cards.end();
	cards_dealed.push_back({ (*card_dealed).rank, (*card_dealed).suite, (*card_dealed).suite_label });
	cards.pop_back();
	return cards[0];
}

void CardB::new_deck()
{
}

void CardB::new_deck(int deck_count)
{
}

int CardB::deck_size()
{
	return 0;
}