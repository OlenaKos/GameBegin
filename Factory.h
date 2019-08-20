#pragma once
#include "Unit.h"
#include <string>
#include <vector>

class Factory
{
   public:
      Factory();
      virtual ~Factory();
      virtual Unit* getUnit(const std::string &);
      void addDepartment(Factory*);
   private:
      std::vector<Factory*> departments;
};