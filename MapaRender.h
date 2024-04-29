#include "XML4OSMUtil.h"


class MapaRender {
    private:
        MapaRender();
        static MapaRender* m_singleton;
        XML4OSMUtil* m_xml4osm_util;
        MapaSolucio* m_mapaBase;

    public:
        static MapaRender* instance();
        MapaRender(MapaRender&) = delete;
        void operator=(const MapaRender&) = delete;
        
        void construeixOSM(const std::string& path_map);

        std::vector<PoiBridge> renderPois();
        std::vector<WayBridge> renderWays();
};


#endif //LP_OSM_2122_MAPA_H
