#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

/*!
*\file
*\brief Funkcje u�ywaj�ce struktury DijkstraResult
*/

/*!@brief Struktura, kt�r� przechowuje wynik dzia�ania algorytmu Dijkstry.
@param vertexName nazwa miasta
@param previous nazwa jego poprzednika
@param weight Trasa od centrali do danego miasta
*/
struct DijkstraResult {
	string vertexName;
	string previous;
	int weight;
};
/*!@brief Funkcja zeruj�ca odleg�o�� dla centrali.
@param cityMap mapa wynikowa programu
@param name nazwa miasta, kt�re jest central�
*/
map<string, DijkstraResult> setCapital(map<string, DijkstraResult> cityMap, string name);
/*!@brief Funkcja szukaj�ca drogi o najkr�tszej odleg�o�ci.
@param cityMap mapa wynikowa programu
@param visitedCities wektor z nazwami odwiedzonych miast
@return funkcja zwraca miasto o najkr�tszej trasie
*/
DijkstraResult findCityWithShortestPath(map<string, DijkstraResult> cityMap, vector<string> visitedCities);

/*!@brief Funkcja, kt�ra rekurencyjnie wyszukuje tras� do danego miasta.
@param tab mapa wynikowa programu
@param name nazwa danego miasta
@return trasa od centrali do danego miasta
*/
string findPath(map<string, DijkstraResult> tab, string name);
/*!@brief Funkcja, kt�ra sprawdza czy dane miasto znajduje si� ju� w li�cie miast odwiedzonych
@param visitedCities wektor z nazwami odwiedzonych miast
@param name nazwa danego miasta
@return zwraca true je�eli miasto znajduje si� w wektorze, a false je�eli nie
*/
bool isVisited(vector<string> visitedCities, string name);

