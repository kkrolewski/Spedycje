#pragma once
#include <iostream>
#include <string>

using namespace std;

/*!
*\file
*\brief Funkcje obs�uguj�ce wej�cie programu i pomoc w u�yciu prze��cznik�w.
*/

/*!@brief Funkcja zwracaj�ca warto�� dla danego prze��cznika.
@param argc Ilo�� parametr�w wej�ciowych
@param agrv tablica parametr�w wej�ciowych
@param name dany prze��cznik
@return zwraca warto�� parametru wej�ciowego dla danego prze��cznika
*/
string extractValue(int argc, char* argv[], string name);
/*!@brief Funkcja sprawdzaj�cy czy u�yty zosta� prze��cznik pomocy
@param argc Ilo�� parametr�w wej�ciowych
@param agrv tablica parametr�w wej�ciowych
@return zwraca true je�li u�yto -h, false je�li nie.
*/
bool helper(int argc, char* argv[]);