#include <cpp_composition_over_inheritance_code/tabletennisplayer.h>
#include <iostream>

int main()
{
    std::unique_ptr<table_tennis::I_Strokable> forehandStroker (new table_tennis::ForehandStroker());
    table_tennis::TableTennisPlayer timoBoll(forehandStroker);
    timoBoll.stroke();
}
