#include "pch.h"
#include "CamiSolucio.h"

std::vector<Coordinate> CamiSolucio::getCamiCoords()
{
	if (!esBuit())
	{
		Coordinate coordenades;
		
		m_lat = 41.4928803;
		m_lon = 2.1452381;

		coordenades.lat = m_lat;
		coordenades.lon = m_lon;

		m_coordenades.push_back(coordenades); //afegim el nou valor

		m_lat = 41.4929072;
		m_lon = 2.1452474;

		coordenades.lat = m_lat;
		coordenades.lon = m_lon;

		m_coordenades.push_back(coordenades); //afegim el nou valor

		m_lat = 41.4933070;
		m_lon = 2.1453852;

		coordenades.lat = m_lat;
		coordenades.lon = m_lon;

		m_coordenades.push_back(coordenades); //afegim el nou valor

		m_lat = 41.4939882;
		m_lon = 2.1456419;

		coordenades.lat = m_lat;
		coordenades.lon = m_lon;

		m_coordenades.push_back(coordenades); //afegim el nou valor
	}

	return m_coordenades;
}
