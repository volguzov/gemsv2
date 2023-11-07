#pragma once

#include <SFML/Graphics.hpp>

#include "Gem.hpp"
#include "Board.hpp"


class Marker : public Gem {
public:
	using Gem::Gem;
	void Draw(sf::RenderWindow& window, int sizeGem);
	void ActionMarker(sf::RenderWindow& window, Board& board);
};