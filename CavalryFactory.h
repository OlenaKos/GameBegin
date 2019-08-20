#pragma once

#include "Factory.h"
#include "Unit.h"
#include <string>

class CavalryFactory : public Factory
{
   public:
      CavalryFactory();
      ~CavalryFactory();
      Unit* getUnit(const std::string &);
};