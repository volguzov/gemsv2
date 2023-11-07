#pragma once

#include <SFML/Graphics.hpp>

#include "Gem.hpp"
#include "Board.hpp"

class Bomb : public Gem {
public:
	Bomb(int x, int y);
	void Draw(sf::RenderWindow& window, int sizeGem);
	void ActionBomb(sf::RenderWindow& window, Board& board);
};