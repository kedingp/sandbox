#include <hero_game/toggledon.h>

namespace hero_game
{
    ToggledOn::ToggledOn()
    {

    }

    ToggledOn::~ToggledOn()
    {

    }

    std::unique_ptr<AbilityState> ToggledOn::request(Ability &ability)
    {
        return getNextStateBehaviour(State::STATE_TOGGLEDON, Transition::TRANSITION_REQUEST, ability);
    }

    void ToggledOn::enter(Ability &ability)
    {
        std::cout << ability.m_name << " has been toggled on!" << std::endl;
    }
}

