#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <cpp_composition_over_inheritance_code/backhandstroker.h>
#include <iostream>
#include <memory>

namespace table_tennis
{
    ForehandStroker::ForehandStroker() :
        m_count(0)
    {

    }

    ForehandStroker::~ForehandStroker()
    {

    }

    void ForehandStroker::stroke()
    {
        std::cout << "Stroke with forehand!\n";
    }

    void ForehandStroker::stroke(TableTennisPlayer* ttPlayer)
    {
        stroke();
        if (++m_count > 1)
        {
            std::unique_ptr<I_Strokable> backhandStroker (new BackhandStroker());
            ttPlayer->setStroke(backhandStroker);
        }
    }

}
