#include "PuntDeInteresBase.h"
using namespace std;

class PuntDeInteresBotigaSolucio: public PuntDeInteresBase
{
public:

    PuntDeInteresBotigaSolucio(){m_shop="";m_opening_hours="";m_wheelchair=false;}
    PuntDeInteresBotigaSolucio(Coordinate coord, string name, string shop,string opening_hours, bool wheelchair ):PuntDeInteresBase(coord,name), m_shop(shop), m_opening_hours(opening_hours),m_wheelchair(wheelchair){}
    ~PuntDeInteresBotigaSolucio(){};

    string getName(){return PuntDeInteresBase::getName();}
    unsigned int getColor();

private:
    string m_shop;
    string m_opening_hours;
    bool m_wheelchair;




};


