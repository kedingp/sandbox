#include <cpp_composition_over_inheritance_code/backhandstroker.h>
#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <iostream>
#include <memory>

namespace table_tennis
{
    BackhandStroker::BackhandStroker()
    {

    }

    BackhandStroker::~BackhandStroker()
    {

    }

    void BackhandStroker::stroke()
    {
        std::cout << "Stroke with backhand!\n";
    }

    void BackhandStroker::stroke(TableTennisPlayer *ttPlayer)
    {
        stroke();
        std::unique_ptr<I_Strokable> forehandStroker(new ForehandStroker());
        ttPlayer->setStroke(forehandStroker);
    }
}

