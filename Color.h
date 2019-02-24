#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include <limits>
#include <windows.h>

using namespace std;

void SetColor ( int value )
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

#endif
