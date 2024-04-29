#pragma once
#include "CamiBase.h"
class CamiSolucio : public CamiBase
{
public:
	CamiSolucio() {}
	~CamiSolucio() {}
	std::vector<Coordinate> getCamiCoords();
	void afegirCoordenada(const Coordinate& c) { m_coordenades.push_back(c); }
	bool esBuit() { return m_coordenades.empty(); }
	int longitud() { return m_coordenades.size(); }

private:
	std::vector<Coordinate> m_coordenades; //vector on guardarem les coordenades
};
