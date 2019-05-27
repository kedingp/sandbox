#include <cpp_composition_over_inheritance_code/tabletennisplayer.h>
#include <cpp_composition_over_inheritance_code/i_strokable.h>
#include <iostream>

namespace table_tennis
{
    TableTennisPlayer::TableTennisPlayer(std::unique_ptr<I_Strokable> &strokeBehaviour)
    {
        m_strokeBehaviour = std::move(strokeBehaviour);
    }

    void TableTennisPlayer::action()
    {
        move();
        stroke();
    }

    void TableTennisPlayer::stroke()
    {
        m_strokeBehaviour->stroke(this);
    }

    void TableTennisPlayer::move()
    {
        m_moveBehaviour->move();
    }

    void TableTennisPlayer::setStroke(std::unique_ptr<I_Strokable> &strokeBehaviour)
    {
        m_strokeBehaviour = std::move(strokeBehaviour);
    }
}
