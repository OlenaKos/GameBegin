#include <string>
#include "Factory.h"
#include "CavalryFactory.h"

Factory* getDepartment(const std::string& unitType)
{
   return unitType == "cavalry" ? new CavalryFactory() : nullptr;
}