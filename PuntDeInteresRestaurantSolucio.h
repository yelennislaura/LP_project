
#include "PuntDeInteresBase.h"
using namespace std;

class PuntDeInteresRestaurantSolucio:public PuntDeInteresBase{
public:
    PuntDeInteresRestaurantSolucio(){m_cuisine="";m_wheelchair=false;}
    PuntDeInteresRestaurantSolucio(Coordinate coord, string name, string cuisine,bool wheelchair ):PuntDeInteresBase(coord,name),m_cuisine(cuisine),m_wheelchair(wheelchair){}
    ~PuntDeInteresRestaurantSolucio(){};

    string getName(){ return PuntDeInteresBase::getName();}
    unsigned int getColor();

private:

    string m_cuisine;
bool m_wheelchair;


};

