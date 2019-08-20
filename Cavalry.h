#pragma once

#include "Unit.h"
#include<map>
#include<string>
#include "Cell.h"

class Cavalry : public Unit
{
public:
	static const std::map <Cell::Landscape, int> AttackBonuses = {

		{ Cell::Landscape::Water, -2 },
		{ Cell::Landscape::Grass, 10 },
		{ Cell::Landscape::Sand, 7 },
		{ Cell::Landscape::Soil, 10 },
		{ Cell::Landscape::Marsh, 5 },
		{ Cell::Landscape::Forest, 7 },
	};

	static const std::map < Cell::Landscape, int> DefenceBonuses = {
		{ Cell::Landscape::Water, 2 },
		{ Cell::Landscape::Grass, 1 },
		{ Cell::Landscape::Sand, 3 },
		{ Cell::Landscape::Soil, 3 },
		{ Cell::Landscape::Marsh, 1 },
		{ Cell::Landscape::Forest, 5}
	};

public:
     //Cavalry();
	 Cavalry(int h, int ch, Cell& c);
     ~Cavalry();
	 virtual int getAttackBonus();
	 virtual int getDefenceBonus();
};