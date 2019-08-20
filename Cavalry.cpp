#include "Cavalry.h"
#include "Cell.h"
#include "Unit.h"
#include <iostream>
#include <map>

Cavalry::Cavalry(int h, int d, Cell& c) : Unit(h,d,c)
{
   std::cout << "Cavalry(int h, damage d, Cell& c) : health (h), damage(d), cell(c)" << std::endl;
}

int Cavalry::getAttackBonus()
{
	std::cout << "Cavalry::GetAttackBonus()"  << std::endl;
	Cell::Landscape landScapeValue = Unit::getCurrentLandscape();
	int attackBonus = AttackBonuses.find(landScapeValue)->second;
	return attackBonus;
}

int Cavalry::getDefenceBonus()
{
	std::cout << "Cavalry::GetDefenceBonus()" << std::endl;
	Cell::Landscape landScapeValue = Unit::getCurrentLandscape();
	bool isDefenced = Unit::getIsDefenced();
	int defenceBonus;
	if (isDefenced)
	{
		defenceBonus = DefenceBonuses.find(landScapeValue)->second;
	}
	else
	{
		defenceBonus = 0;
	}
	return defenceBonus;
}
Cavalry::~Cavalry()
{
   std::cout << "Cavalry::~Cavalry()" << std::endl;
}