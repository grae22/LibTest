#pragma once

#include <string>

#include "..\Main\IObject.h"

#ifdef LIBOBJECT_EXPORT
#define LIBOBJECT_API __declspec( dllexport )
#else
#define LIBOBJECT_API __declspec( dllimport )
#endif

class LibObject : public IObject
{
public:
  LibObject( const char* name );

  LIBOBJECT_API virtual const char* GetText() const;

private:
  const std::string m_name;
};