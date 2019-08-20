#include "Unit.h"
#include "Cell.h"
#include <iostream>


Unit::Unit(int h, int d, Cell& c) : health(h), damage(d), cell(c)
{
	std::cout << "Unit(int h, int d, cell& c) : health(h), damage(d), cell(c)" << std::endl;
}

int Unit::getHealth()
{
	std::cout << this->health << std::endl;
	return this->health;
}

bool Unit::getIsDefenced()
{
	std::cout << "this->IsDefenced" << this->IsDefenced << std::endl;
	return this->IsDefenced;
}

Cell::Landscape Unit::getCurrentLandscape()
{
	return this->cell.LandscapeValue;
}

void Unit::attack(Unit* unit)
{
	int attackBonus = this->getAttackBonus();
	int defenceBonus = this->getDefenceBonus();
	int damage = this->damage + attackBonus - defenceBonus;
	unit->health = unit->health - damage;
	std::cout << this->getHealth() << std::endl;
	return;
}

Unit::~Unit()
{
  std::cout << "Unit::~Unit()" << std::endl;
}
