#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*!
*\file
*\brief Funkcje u¿ywaj¹ce struktury Neighbours
*/


/*!@brief Struktura, która informacje o nazwie s¹siada wraz z odleg³oœci¹ do niego.
@param name nazwa s¹siada
@param distance odleg³oœæ danego miasta od s¹siada
*/
struct Neighbours {
	string name;
	int distance;
};
/*!@brief Sprawdza czy miasto o danej nazwie znajduje siê w liœcie s¹siadów.
@param neighbours vektor z s¹siadami
@param name Nazwa nowego s¹siada dla którego nastêpuje sprawdzenie
@return je¿eli miasto znajduje siê na liœcie s¹siadów zwróc true, jeœli nie false
*/
bool isInNeighbours(vector<Neighbours> neighbours, string name);

