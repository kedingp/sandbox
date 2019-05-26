#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <iostream>

namespace table_tennis
{
    ForehandStroker::ForehandStroker()
    {

    }

    void ForehandStroker::stroke()
    {
        std::cout << "Stroke with forehand!\n";
    }

}
