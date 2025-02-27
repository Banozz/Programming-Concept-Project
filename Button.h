#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp> 

class Button
{
		
	public:
		
		Button(std::string t, sf::Vector2f size, int charSize, sf::Color textColor, sf::Color btnColor);

		void setFont(sf::Font &font);
		void setBackColor(sf::Color color);
		void setTextColor(sf::Color color);
		void setPosition(sf::Vector2f pos);
		void drawTo(sf::RenderWindow &window);
		bool isMouseOver(sf::RenderWindow &window);
		
	private:
		sf::RectangleShape button;
		sf::Text text;	
};

