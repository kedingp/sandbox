#include <cpp_composition_over_inheritance_code/tabletennisplayer.h>
#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <iostream>

int main()
{
    std::unique_ptr<table_tennis::I_Strokable> forehandStroker (new table_tennis::ForehandStroker());
    table_tennis::TableTennisPlayer timoBoll(forehandStroker);
    unsigned int command;
    while(true)
    {
        std::cout << "Your command:\n" << std::endl;
        std::cin >> command;
        std::cout << "is" << command << std::endl;
        if (command == 1)
        {
            timoBoll.stroke();
        }
        else
        {
            return 0;
        }
    }
}
