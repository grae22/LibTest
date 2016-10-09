#pragma once

#include <string>

#include "..\Main\IObject.h"

#ifdef DLLOBJECT_EXPORT
#define DLLOBJECT_API __declspec( dllexport )
#else
#define DLLOBJECT_API __declspec( dllimport )
#endif

class DllObject : public IObject
{
public:
  DLLOBJECT_API DllObject( const char* name );

  DLLOBJECT_API virtual const char* GetText() const;

private:
  const std::string m_name;
};