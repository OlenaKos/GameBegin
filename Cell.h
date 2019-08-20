#pragma once

class Cell
{
public:
	enum Landscape
	{
		Water,
		Grass,
		Sand,
		Soil,
		Marsh,
		Forest
	};

	Landscape LandscapeValue;
public:

	Cell();
	Cell(Cell::Landscape land);
	~Cell();
	Cell::Landscape getLandscape();

};
