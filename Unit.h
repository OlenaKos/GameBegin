#pragma once
#include "Cell.h"

class Unit
{
private:
	int health;
	int damage;
	Cell& cell;
	bool IsDefenced;

public:
    //   Unit();
	   //Unit(int h, int ch);
	   Unit(int h, int ch, Cell& c);
       virtual ~Unit() = 0;
	   void attack(Unit* unit);
	   int getHealth();
	   Cell::Landscape getCurrentLandscape();
	   bool getIsDefenced();
	   virtual int getAttackBonus() = 0;
	   virtual int getDefenceBonus() = 0;
};
