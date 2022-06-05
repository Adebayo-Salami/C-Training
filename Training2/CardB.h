#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <random>

struct CardInfo {
	std::string rank;
	std::string suite;
	const char suite_label;

	//CardInfo operator=(const CardInfo & rhs) const 
	//{
	//	return {
	//		rhs.rank,
	//		rhs.suite,
	//		rhs.suite_label
	//	};
	//}
};

class CardB {
private:
	std::vector<CardInfo> cards;
	std::vector<CardInfo> cards_dealed;
	std::default_random_engine rng = std::default_random_engine{};
	void add_new_deck();
	std::string get_card_rank(int level);

public:
	CardB();
	~CardB();
	void shuffle_deck();
	const CardInfo & deal_card();
	void deal_card(int count);
	void new_deck();
	void new_deck(int deck_count);
	int deck_size();
};