#pragma once
#include <iostream>
#include <string>

using namespace std;

/*!
*\file
*\brief Funkcje obs³uguj¹ce wejœcie programu i pomoc w u¿yciu prze³¹czników.
*/

/*!@brief Funkcja zwracaj¹ca wartoœæ dla danego prze³¹cznika.
@param argc Iloœæ parametrów wejœciowych
@param agrv tablica parametrów wejœciowych
@param name dany prze³¹cznik
@return zwraca wartoœæ parametru wejœciowego dla danego prze³¹cznika
*/
string extractValue(int argc, char* argv[], string name);
/*!@brief Funkcja sprawdzaj¹cy czy u¿yty zosta³ prze³¹cznik pomocy
@param argc Iloœæ parametrów wejœciowych
@param agrv tablica parametrów wejœciowych
@return zwraca true jeœli u¿yto -h, false jeœli nie.
*/
bool helper(int argc, char* argv[]);