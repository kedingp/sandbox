#ifndef BACKHANDSTROKER_H
#define BACKHANDSTROKER_H

#include <cpp_composition_over_inheritance_code/i_strokable.h>
#include <cpp_composition_over_inheritance_code/tabletennisplayer.h>

namespace table_tennis
{
    class BackhandStroker : public I_Strokable
    {
    public:
        BackhandStroker();

        ~BackhandStroker();

        void stroke() override;

        void stroke(TableTennisPlayer* ttPlayer) override;

    };
}

#endif // BACKHANDSTROKER_H
