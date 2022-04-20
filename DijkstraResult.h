#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

/*!
*\file
*\brief Funkcje u¿ywaj¹ce struktury DijkstraResult
*/

/*!@brief Struktura, któr¹ przechowuje wynik dzia³ania algorytmu Dijkstry.
@param vertexName nazwa miasta
@param previous nazwa jego poprzednika
@param weight Trasa od centrali do danego miasta
*/
struct DijkstraResult {
	string vertexName;
	string previous;
	int weight;
};
/*!@brief Funkcja zeruj¹ca odleg³oœæ dla centrali.
@param cityMap mapa wynikowa programu
@param name nazwa miasta, które jest central¹
*/
map<string, DijkstraResult> setCapital(map<string, DijkstraResult> cityMap, string name);
/*!@brief Funkcja szukaj¹ca drogi o najkrótszej odleg³oœci.
@param cityMap mapa wynikowa programu
@param visitedCities wektor z nazwami odwiedzonych miast
@return funkcja zwraca miasto o najkrótszej trasie
*/
DijkstraResult findCityWithShortestPath(map<string, DijkstraResult> cityMap, vector<string> visitedCities);

/*!@brief Funkcja, która rekurencyjnie wyszukuje trasê do danego miasta.
@param tab mapa wynikowa programu
@param name nazwa danego miasta
@return trasa od centrali do danego miasta
*/
string findPath(map<string, DijkstraResult> tab, string name);
/*!@brief Funkcja, która sprawdza czy dane miasto znajduje siê ju¿ w liœcie miast odwiedzonych
@param visitedCities wektor z nazwami odwiedzonych miast
@param name nazwa danego miasta
@return zwraca true je¿eli miasto znajduje siê w wektorze, a false je¿eli nie
*/
bool isVisited(vector<string> visitedCities, string name);

