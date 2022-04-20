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

/*!@brief Struktura, która przechowuje jest nazwê miasta i wektor z jego sasi¹dami.
@param name Nazwa miasta
@param neighboursVector wektor jego s¹siadów
*/
struct Cities {
	string name;
	vector<Neighbours> neighboursVector;
};