#include "Unit.h"
#include "Factory.h"
#include "Cell.h"
#include <string>
#include <iostream>

Factory* getDepartment(const std::string &);

int main(int argv, char* argc[])
{
   std::string unitType = "cavalry";//argc[1];
   Cell::Landscape land = Cell::Landscape::Grass;
   Cell* myCell = new Cell(land);
   Factory factory;
   factory.addDepartment(getDepartment(unitType));
   Unit* unit = factory.getUnit(unitType);

   Unit* cavalry1 = factory.getUnit(unitType);
   Unit* cavalry2 = factory.getUnit(unitType);
   // use unit there
   std::cout << "unit->getHealth ()" << unit->getHealth () << std::endl;
   std::cout << "myCell->getLandscape ()" << myCell->getLandscape ()<< std::endl;

   std::cout << "cavalry1->getHealth ()" << cavalry1->getHealth() << std::endl;
   std::cout << "cavalry2->getHealth ()" << cavalry2->getHealth() << std::endl;

   cavalry1->attack(cavalry2);

   std::cout << "cavalry1->getHealth () after attack" << cavalry1->getHealth() << std::endl;
   std::cout << "cavalry2->getHealth () after attack" << cavalry2->getHealth() << std::endl;
   int a  = myCell->getLandscape();
   delete unit;
   return 0;
}