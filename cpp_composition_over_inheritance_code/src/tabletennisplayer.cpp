#include <cpp_composition_over_inheritance_code/tabletennisplayer.h>
#include <cpp_composition_over_inheritance_code/i_strokable.h>
#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <iostream>

namespace table_tennis
{
    TableTennisPlayer::TableTennisPlayer(std::unique_ptr<I_Strokable> &strokeBehaviour)
    {
        m_strokeBehaviour = std::move(strokeBehaviour);
    }

    void TableTennisPlayer::stroke()
    {
        m_strokeBehaviour->stroke();
    }

    void TableTennisPlayer::setStroke(std::unique_ptr<I_Strokable> &strokeBehaviour)
    {
        m_strokeBehaviour = std::move(strokeBehaviour);
    }
}
