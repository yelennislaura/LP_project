

#include "PuntDeInteresBotigaSolucio.h"
#include "PuntDeInteresBase.h"

int unsigned PuntDeInteresBotigaSolucio::getColor()
{

    if(m_shop=="supermarket")
    {
        return 0xA5BE00;
    }
    else
    {
        if(m_shop=="tobacco")
        {
            return 0xA5BE00;
        }
        else
        {
            if((m_shop=="bakery")&&(m_mobilitatReduida)&&(m_opening_hours.find("06:00-22:00")))
            {
                return 0xE85D75;
            }
            else
            {
                return 0xEFD6AC;
            }
        }
    }
}


