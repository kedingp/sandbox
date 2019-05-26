#ifndef BACKHANDSTROKER_H
#define BACKHANDSTROKER_H

#include <cpp_composition_over_inheritance_code/i_strokable.h>

namespace table_tennis
{
    class BackhandStroker : public I_Strokable
    {
    public:
        BackhandStroker();

        void stroke();

    };
}

#endif // BACKHANDSTROKER_H
