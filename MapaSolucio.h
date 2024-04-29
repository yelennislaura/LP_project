#pragma once
#include "MapaBase.h"
#include "CamiSolucio.h"
#include "PuntDeInteresBotigaSolucio.h"
#include "PuntDeInteresRestaurantSolucio.h"
#include <vector>

class MapaSolucio : public MapaBase
{
public:
  void getPdis(std::vector<PuntDeInteresBase*>& pdis);
  void getCamins(std::vector<CamiBase*>& camins);
  void parsejaXmlElements(std::vector<XmlElement>& xmlElements);

private:
  std::vector<CamiSolucio> m_camins; //vector de camins
  std::vector<PuntDeInteresBotigaSolucio> m_pdibs; //vector de punts botiga
  std::vector<PuntDeInteresRestaurantSolucio> m_pdirs; //vector de punts restaurant
};
