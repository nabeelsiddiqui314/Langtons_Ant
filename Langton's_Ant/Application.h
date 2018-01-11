#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Ant.h"
#include <vector>

enum class State {
	ON,
	OFF
};

class Application
{
public:
	Application();
	Application(const Application& other) = delete;
	~Application();
public:
	void Run();
private:
	inline void SetTexture();

	State GetPixelState(const sf::Vector2u& pixel) const;

	void Update();
	void Render();
private:
	sf::RenderWindow m_mainWindow;

	sf::RectangleShape m_cells;
	sf::Texture        m_cellsTex;
	sf::Image          m_pixelBuffer;

	std::vector<Ant> m_ants;
};

