#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Graphics/Sprite.hpp"
#define MAX_NUMBER_OF_ITEMS 6
class Menu
{
public:
	Menu(float width, float height);
	~Menu();

	void draw(sf::RenderWindow& window);
	void MoveUp();
	void MoveDown();

	int GetPressedItem() { return selectedItemIndex; }
	void MouseMove(sf::Vector2i mouse_pos);

private:
	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
	sf::Texture logotexture;
	sf::Sprite logo;
};

