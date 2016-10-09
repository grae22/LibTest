#include "DllObject.h"

DllObject::DllObject( const char* name )
:
  m_name( name )
{

}

const char* DllObject::GetText() const
{
  return "DLL Object";
}