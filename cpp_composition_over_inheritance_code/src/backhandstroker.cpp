#include <cpp_composition_over_inheritance_code/backhandstroker.h>
#include <iostream>

namespace table_tennis
{
    BackhandStroker::BackhandStroker()
    {

    }

    void BackhandStroker::stroke()
    {
        std::cout << "Stroke with backhand!\n";
    }
}

