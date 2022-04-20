#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*!
*\file
*\brief Funkcje u�ywaj�ce struktury Neighbours
*/


/*!@brief Struktura, kt�ra informacje o nazwie s�siada wraz z odleg�o�ci� do niego.
@param name nazwa s�siada
@param distance odleg�o�� danego miasta od s�siada
*/
struct Neighbours {
	string name;
	int distance;
};
/*!@brief Sprawdza czy miasto o danej nazwie znajduje si� w li�cie s�siad�w.
@param neighbours vektor z s�siadami
@param name Nazwa nowego s�siada dla kt�rego nast�puje sprawdzenie
@return je�eli miasto znajduje si� na li�cie s�siad�w zwr�c true, je�li nie false
*/
bool isInNeighbours(vector<Neighbours> neighbours, string name);

