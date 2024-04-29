#pragma once
#include "MapaSolucio.h"

  void getPdis(std::vector<PuntDeInteresBase*>& pdis)
  {
    PuntDeInteresBotigaSolucio botiga((41.4918606, 2.1465411), "La Millor Pastisseria", "bakery", " ", false);
    pdis.push_back(botiga);
    
    PuntDeInteresRestaurantSolucio restaurant((41.4902204, 2.1406477), “El MillorRestaurant”, "regional", true);
    pdis.push_back(restaurant);
  }

  void getCamins(std::vector<CamiBase*>& camins)
  {
    typename std::vector<CamiBase>::iterator it; //fem un iterador
    
    for(it = m_camins.begin(); it != m_camins.end(); i++)
      camins.push_back(new CamiSolucio(*it));
    
    delete it;
  }

  void parsejaXmlElements(std::vector<XmlElement>& xmlElements)
  {
    typename std::vector<XmlElement>:: iterator it;
    for(it = xmlElements.begin(); it!= xmlElements.end(); it++)
    {
      if ((*it)->id_element == "node")
      {
        for (int i = 0; i < (*it)->fills.size(); i++) 
        {
          if ((*it)->fills[i].first == "tag")
          {
            std::pair<std::string, std::string> valorTag = Util::kvDeTag((*it)->fills[i].second);
            if (valorTag.first == "highway") 
            {
              Coordenate coordenades;
              coordenades.lat = (*it)->atributs[1].second;
              coordenades.lon = (*it)->atributs[2].second;
              cami.afegirCoordenada(coordenades);
            }
          }
        }
        m_camins.push_back(cami);
      } 
    }
    delete it;
  }
