#include "CardB.h"

void CardB::add_new_deck()
{
	int S = 1;
	while (S <= 13)
		cards.push_back({ get_card_rank(S++), "SPADE", 'S' });

	int H = 1;
	while (H <= 13)
		cards.push_back({ get_card_rank(H++), "HEART", 'H' });

	int C = 1;
	while (C <= 13)
		cards.push_back({ get_card_rank(C++), "CLOVER", 'C' });

	int D = 1;
	while (D <= 13)
		cards.push_back({ get_card_rank(D++), "DIAMOND", 'D' });
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
	int size = (cards.size() - 1);
	std::vector<int> cardsIndex;
	while (size >= 0)
		cardsIndex.push_back(size--);
	std::shuffle(std::begin(cardsIndex), std::end(cardsIndex), rng);
	std::vector<CardInfo> shuffledCards;

	for (auto& cardIndex : cardsIndex)
		shuffledCards.push_back(cards[cardIndex]);
	cards.clear();
	for (auto card : shuffledCards)
		cards.push_back(card);
}

const CardInfo & CardB::deal_card()
{
	if (cards.empty()) throw "Can't Deal From Empty Deck";
	auto card_dealed = cards[cards.size() - 1];
	cards_dealed.push_back({ (card_dealed).rank, (card_dealed).suite, (card_dealed).suite_label });
	cards.pop_back();
	return cards_dealed[cards_dealed.size() - 1];
}

void CardB::new_deck()
{
	add_new_deck();
}

void CardB::new_deck(int deck_count)
{
	for (int count = deck_count; deck_count > 0; deck_count--)
		add_new_deck();
}

int CardB::deck_size()
{
	return cards.size();
}

void CardB::deal_card(int count)
{
	for (int c = count; count > 0; count--) {
		auto card = deal_card();
		std::cout << "Card Dealed -> " << card.suite << " " << card.rank << std::endl;
	}
}
