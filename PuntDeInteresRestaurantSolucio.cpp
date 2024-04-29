//
// Created by Yelennis Laura on 5/10/22.
//

#include "PuntDeInteresRestaurantSolucio.h"
#include "PuntDeInteresBase.h"


unsigned int PuntDeInteresRestaurantSolucio::getColor()
{
    if(m_cuisine=="pizza"&& m_wheelchair)
    {
        return 0x03FCBA;
    }
    else
    {
        if(m_cuisine=="chinese")
        {
            return 0xA6D9F7;
        }
        else
        {
            if(m_wheelchair)
            {
                return 0x251351;
            }
            else
            {
                return PuntDeInteresBase::getColor();
            }
        }
    }

}
