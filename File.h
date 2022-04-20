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
*\brief Funkcje pracuj�ce na plikach.
*/

/*!@brief Funkcja odczytuj�ca z zadanego pliku dane oraz zapisuj�ca je do listy.
@param fileName Nazwa pliku z kt�rego odczytujemy dane
*/
map<string, Cities> readFromFile(const string& fileName);
/*!@brief Funkcja zapisuj�ca wyniki do danego pliku.
@param tab mapa wynikowa programu
@param fileName Nazwa pliku do kt�rego nast�puje zapis danych
@param capital Nazwa miasta, kt�re jest central�
*/
void saveToFile(map<string, DijkstraResult> tab, const string& fileName, string capital);