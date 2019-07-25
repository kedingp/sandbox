#include <hero_game/ready.h>
#include <iostream>

namespace hero_game
{
    Ready::Ready()
    {
    }

    Ready::~Ready()
    {
    }

    std::unique_ptr<AbilityState> Ready::request(Ability &ability)
    {
        return getNextStateBehaviour(State::STATE_READY, Transition::TRANSITION_REQUEST, ability);
    }

    void Ready::enter(Ability &ability)
    {
        std::cout << ability.m_name << " is ready!" << std::endl;
    }
}

