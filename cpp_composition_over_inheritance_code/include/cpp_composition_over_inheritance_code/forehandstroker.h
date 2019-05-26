#ifndef FOREHANDSTROKER_H
#define FOREHANDSTROKER_H

#include <cpp_composition_over_inheritance_code/i_strokable.h>

namespace table_tennis
{
    class ForehandStroker : public I_Strokable
    {
    public:
        ForehandStroker();
        void stroke() override;
    };
}

#endif // FOREHANDSTROKER_H
