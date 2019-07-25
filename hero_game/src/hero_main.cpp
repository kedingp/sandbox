#include <hero_game/ability.h>
#include <hero_game/toggleability.h>
#include <hero_game/executableability.h>
#include <hero_game/passiveability.h>
#include <hero_game/abilitystate.h>
#include <iostream>
#include <hero_game/timercpp.h>
#include <hero_game/ready.h>
#include <hero_game/cooldown.h>
#include <hero_game/hero.h>
#include <memory>

int main(int argc, char** argv)
{
    std::array<std::unique_ptr<hero_game::Ability>, 4> abilities;
    abilities[0].reset(new hero_game::PassiveAbility ("Frost Shot"));
    abilities[1].reset(new hero_game::ToggleAbility ("Bloodlust"));
    abilities[2].reset(new hero_game::ExecutableAbility ("Volley", 3000));
    abilities[3].reset(new hero_game::ExecutableAbility("Enchanted Chrystal Arrow", 10000));

    hero_game::hero ashe("Ashe", abilities);

    std::string input;
    while(true)
    {
        std::cin >> input;
        if (input == argv[1])
        {
            ashe.requestAbility(0);
        }
        else if (input == argv[2])
        {
            ashe.requestAbility(1);
        }
        else if (input == argv[3])
        {
            ashe.requestAbility(2);
        }
        else if (input == argv[4])
        {
            ashe.requestAbility(3);
        }
    }
}
