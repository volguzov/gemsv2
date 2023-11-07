#pragma once

#include <SFML/Graphics.hpp>

#include "Gem.hpp"

#include <iostream>
#include <set>
#include <tuple>
#include <vector>

using namespace std;

class Board {
private:
	vector<vector<Gem*>> gems_;
	int rows_;
	int columns_;
	int width_;
	int height_;
	static const int sizeGem_ = 100;

public:
	Board(int width, int height);

	void Draw(sf::RenderWindow& window);
	void AnimationMove(int x1, int y1, int x2, int y2, float transitionTime, sf::RenderWindow& window);
	sf::VertexArray CreateLines();

	void CreateGems();
	void SwapGems(int x1, int y1, int x2, int y2);
	void DestroyGems(std::set<std::tuple<int, int>>& coordinates_combinations, sf::RenderWindow& window);
	void AddGems(sf::RenderWindow& window);

	int GetSizeGem();
	vector<vector<Gem*>> GetGems();
	Gem& GetGemAt(int x, int y);

	bool IsFoundCombinatioins();
	std::set<std::tuple<int, int>> SearchCombinations();
	void Update(sf::RenderWindow& window);

	std::tuple<int, int> SetBonusPosition(int x, int y);
};