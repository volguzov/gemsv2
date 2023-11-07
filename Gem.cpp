#include <SFML/Graphics.hpp>
#include "Gem.hpp"


Gem::Gem() {}

Gem::Gem(int x, int y, sf::Color color) {
	x_ = x;
	y_ = y;
	color_ = color;
}

void Gem::SetX(int newX) {
	x_ = newX;
}

void Gem::SetY(int newY) {
	y_ = newY;
}

void Gem::SetColor(sf::Color newColor) {
	color_ = newColor;
}

void Gem::SetSelected() {


	isSelected_ = true;
	originalColor_ = color_;
	color_ = sf::Color(color_.r, color_.g, color_.b, 200);
}

void Gem::SetDeselected() {

	isSelected_ = false;
	color_ = originalColor_;
}

void Gem::SetBomb(bool isBomb) {
	isBomb_ = isBomb;
}

void Gem::SetMarker(bool isMarker) {
	isMarker_ = isMarker;
}

int Gem::GetX() {
	return x_;
}

int Gem::GetY() {
	return y_;
}

sf::Color Gem::GetColor() {
	return color_;
}

bool Gem::GetSelected() const { return isSelected_; }

bool Gem::GetBomb() {
	return isBomb_;
}

bool Gem::GetMarker() {
	return isMarker_;
}

sf::Color Gem::ChoiceColor() {

	switch (std::rand() % 6) {
	case 0:
		return sf::Color::Red;
	case 1:
		return sf::Color::Green;
	case 2:
		return sf::Color::Blue;
	case 3:
		return sf::Color::Yellow;
	case 4:
		return sf::Color::Magenta;
	case 5:
		return sf::Color::Cyan;
	}
}