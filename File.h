#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include<sstream>
#include<regex>
#include <map>
#include <memory>

#include "DijkstraResult.h"
#include "Cities.h"

using namespace std;

/*!
*\file
*\brief Funkcje pracuj¹ce na plikach.
*/

/*!@brief Funkcja odczytuj¹ca z zadanego pliku dane oraz zapisuj¹ca je do listy.
@param fileName Nazwa pliku z którego odczytujemy dane
*/
map<string, Cities> readFromFile(const string& fileName);
/*!@brief Funkcja zapisuj¹ca wyniki do danego pliku.
@param tab mapa wynikowa programu
@param fileName Nazwa pliku do którego nastêpuje zapis danych
@param capital Nazwa miasta, które jest central¹
*/
void saveToFile(map<string, DijkstraResult> tab, const string& fileName, string capital);