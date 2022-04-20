	#pragma once
#include <iostream>
#include <string>
#include <map>
#include <memory>

#include "DijkstraResult.h"
#include "Cities.h"

using namespace std;

/*!
*\file
*\brief Funkcja Dijkstra, kt�ra jest g��wnym algorytmem programu.
*/

/*!@brief Funkcja wykorzystuj�ca algorytm Dijkstry do wyliczania najkr�tszych tras do ka�dego miasta od centrali.
@param cityMap Mapa z miastami odczytana z pliku
@param capital Nazwa miasta, kt�re jest central�
*/
map<string, DijkstraResult> dijkstra(map<string, Cities> cityMap, string capital);
