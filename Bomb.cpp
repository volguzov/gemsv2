#include <SFML/Graphics.hpp>

#include "Bomb.hpp"

Bomb::Bomb(int x, int y) {
	x_ = x;
	y_ = y;
}

void Bomb::Draw(sf::RenderWindow& window, int sizeGem) {

	sf::CircleShape circle(200);

	float radius = 30;
	float delta = 1;
	circle.setRadius(radius);
	circle.setPosition(x_ * sizeGem + 0.2 * sizeGem, y_ * sizeGem + 0.2 * sizeGem);

	circle.setFillColor(sf::Color(40, 40, 40));

	circle.setOutlineThickness(10);
	circle.setOutlineColor(sf::Color::Black);

	sf::RectangleShape wick(sf::Vector2f(20, 10));
	wick.setFillColor(sf::Color::Black);
	wick.rotate(135);

	wick.setPosition(x_ * sizeGem + 0.95 * sizeGem, y_ * sizeGem + 0.1 * sizeGem);
	window.draw(wick);
	window.draw(circle);
	sf::RectangleShape fire(sf::Vector2f(10, 10));
	fire.rotate(135);
	fire.setFillColor(sf::Color(255, 165, 0));
	fire.setOutlineThickness(3);
	fire.setOutlineColor(sf::Color::Black);

	fire.setPosition(wick.getPosition() + sf::Vector2f(0, 0));

	window.draw(fire);
}

void Bomb::ActionBomb(sf::RenderWindow& window, Board& board) {

	for (int i = 0; i < 4; i++) {
		int x = rand() % board.GetGems()[0].size();
		int y = rand() % board.GetGems().size();
		std::cout << x << std::endl;
		std::cout << y << std::endl;
		Gem& gem = board.GetGemAt(x, y);
		gem.SetColor(sf::Color::Black);
		std::cout << x << std::endl;
		std::cout << y << std::endl;
	}
	Gem& gem_with_bomb = board.GetGemAt(x_, y_);
	gem_with_bomb.SetColor(sf::Color::Black);
	board.Draw(window);
	board.AddGems(window);
}