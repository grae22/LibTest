#pragma once

#include <string>

class IObject
{
public:
  virtual ~IObject() { }

  virtual const char* GetText() const = 0;
};