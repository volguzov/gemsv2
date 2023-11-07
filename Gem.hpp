#pragma once

#include <SFML/Graphics.hpp>


class Gem {
protected:
	sf::Color color_;
	sf::Color originalColor_;
	int x_;
	int y_;
	bool isSelected_ = false;
	bool isBomb_ = false;
	bool isMarker_ = false;

public:
	Gem();
	Gem(int x, int y, sf::Color color);
	static sf::Color ChoiceColor();

	void SetX(int newX);
	void SetY(int newY);
	void SetColor(sf::Color newColor);
	void SetSelected();
	void SetDeselected();
	void SetBomb(bool isBomb);
	void SetMarker(bool isMarker);

	int GetX();
	int GetY();
	sf::Color GetColor();
	bool GetSelected() const;
	bool GetBomb();
	bool GetMarker();
};