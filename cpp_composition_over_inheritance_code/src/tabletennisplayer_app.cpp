#include <cpp_composition_over_inheritance_code/tabletennisplayer.h>
#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <iostream>

int main()
{
    std::unique_ptr<table_tennis::I_Strokable> forehandStroker (new table_tennis::ForehandStroker());
    table_tennis::TableTennisPlayer timoBoll(forehandStroker);
    for(int i = 0; i < 9; i++)
    {
        timoBoll.stroke();
    }
}
