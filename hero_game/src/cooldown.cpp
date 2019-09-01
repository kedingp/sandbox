#include <hero_game/cooldown.h>
#include <hero_game/ready.h>
#include <iostream>

namespace hero_game
{
    Cooldown::Cooldown()
    {
    }

    Cooldown::~Cooldown()
    {
    }

    std::unique_ptr<AbilityState> Cooldown::request(Ability &ability)
    {
        std::cout << "You cannot execute " << ability.m_name << ". It is on cooldown!" << std::endl;
        return NULL;
    }

    void Cooldown::enter(Ability &ability)
    {
        std::cout << "Execute " << ability.m_name << std::endl;
        ability.m_timer.setTimeout([&]() {
            ability.m_state.reset(new Ready());
            ability.m_state->enter(ability);
            ability.m_timer.stop();
        }, ability.m_cooldownInMillisecs);
    }
}
