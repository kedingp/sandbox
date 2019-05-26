#ifndef TABLETENNISPLAYER_H
#define TABLETENNISPLAYER_H

#include <cpp_composition_over_inheritance_code/i_strokable.h>
#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <memory>

namespace table_tennis
{
    class TableTennisPlayer
    {
    public:
        TableTennisPlayer(std::unique_ptr<I_Strokable>& strokeBehaviour);

        void stroke();

        void setStroke(std::unique_ptr<I_Strokable>& strokeBehaviour);
    private:
        std::unique_ptr<I_Strokable> m_strokeBehaviour;
    };
}

#endif // TABLETENNISPLAYER_H
