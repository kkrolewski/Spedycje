#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Neighbours.h"

using namespace std;

/*!
*\file
*\brief  struktura Cities
*/

/*!@brief Struktura, kt�ra przechowuje jest nazw� miasta i wektor z jego sasi�dami.
@param name Nazwa miasta
@param neighboursVector wektor jego s�siad�w
*/
struct Cities {
	string name;
	vector<Neighbours> neighboursVector;
};