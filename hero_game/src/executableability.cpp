#include <hero_game/executableability.h>

namespace hero_game
{
    ExecutableAbility::ExecutableAbility(const std::string& name, const unsigned int cooldown) :
        Ability(name, cooldown)
    {
        m_stateDiagramm[std::make_pair(State::STATE_READY, Transition::TRANSITION_REQUEST)] = State::STATE_COOLDOWN;
    }
}
