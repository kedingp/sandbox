#ifndef TABLETENNISPLAYER_H
#define TABLETENNISPLAYER_H

#include <cpp_composition_over_inheritance_code/i_strokable.h>
#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <cpp_composition_over_inheritance_code/i_movable.h>
#include <memory>

namespace table_tennis
{
    class TableTennisPlayer
    {
    public:
        TableTennisPlayer(std::unique_ptr<I_Strokable>& strokeBehaviour);

        void action();

        void stroke();

        void move();

        void setStroke(std::unique_ptr<I_Strokable>& strokeBehaviour);
    private:
        std::unique_ptr<I_Strokable> m_strokeBehaviour;
        std::unique_ptr<I_Movable> m_moveBehaviour;
    };
}

#endif // TABLETENNISPLAYER_H
