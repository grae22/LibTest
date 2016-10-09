#include "LibObject.h"

LibObject::LibObject( const char* name )
:
  m_name( name )
{

}

const char* LibObject::GetText() const
{
  return "Lib Object";
}