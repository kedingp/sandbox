#include <hero_game/ability.h>
#include <hero_game/abilitystate.h>
#include <hero_game/ready.h>
#include <iostream>

namespace hero_game
{
    Ability::Ability(const std::string &name, const unsigned int cooldown) :
        m_name(name), m_cooldownInMillisecs(cooldown)
    {
        m_state.reset(new Ready());
        std::cout << "Ability "  << m_name << " initialized!" << std::endl;
    }

    Ability::~Ability()
    {

    }

    void Ability::request()
    {
        std::unique_ptr<AbilityState> newState = m_state->request(*this);
        if(newState !=NULL)
        {
            m_state = std::move(newState);
            m_state->enter(*this);
        }
    }
}

