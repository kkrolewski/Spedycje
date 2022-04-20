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
*\brief Funkcja Dijkstra, która jest g³ównym algorytmem programu.
*/

/*!@brief Funkcja wykorzystuj¹ca algorytm Dijkstry do wyliczania najkrótszych tras do ka¿dego miasta od centrali.
@param cityMap Mapa z miastami odczytana z pliku
@param capital Nazwa miasta, które jest central¹
*/
map<string, DijkstraResult> dijkstra(map<string, Cities> cityMap, string capital);
