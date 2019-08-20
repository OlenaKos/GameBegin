#pragma once
#include <iostream>
#include "Cell.h"

Cell::Cell ()
{
	std::cout << "Cell::Cell()" << std::endl;
};

Cell::Cell(Cell::Landscape land) : LandscapeValue(land)
{
	this->LandscapeValue = land;
	std::cout << "Cell::Cell()" << std::endl;
};

Cell::Landscape Cell::getLandscape()
{
	std::cout << "this -> LandscapeValue " << this->LandscapeValue << std::endl;
	return this->LandscapeValue;
}

Cell::~Cell()
{
	std::cout << "Cell::~Cell()" << std::endl;
}