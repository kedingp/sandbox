#ifndef FOREHANDSTROKER_H
#define FOREHANDSTROKER_H

#include <cpp_composition_over_inheritance_code/i_strokable.h>
#include <cpp_composition_over_inheritance_code/tabletennisplayer.h>

namespace table_tennis
{
    class ForehandStroker : public I_Strokable
    {
    public:
        ForehandStroker();

        ~ForehandStroker();

        void stroke() override;

        void stroke(TableTennisPlayer *ttPlayer) override;
    private:
        unsigned int m_count;
    };
}

#endif // FOREHANDSTROKER_H
