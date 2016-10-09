#include <stdio.h>
#include <conio.h>
#include <memory>

#include "IObject.h"
#include "..\DllObject\DllObject.h"
#include "..\LibObject\LibObject.h"

using namespace std;

int main()
{
  auto dllOb = make_unique<DllObject>( "123" );
  auto libOb = make_unique<LibObject>( "abc" );

  auto t = dllOb->GetText();

  printf( "%s\n", dllOb->GetText() );
  printf( "%s\n", libOb->GetText() );
  
  _getch();

  return 0;
}