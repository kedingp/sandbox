#include <hero_game/toggleability.h>

namespace hero_game
{
    ToggleAbility::ToggleAbility(const std::string& name) :
        Ability(name, -1)
    {
        m_stateDiagramm[std::make_pair(State::STATE_READY, Transition::TRANSITION_REQUEST)] = State::STATE_TOGGLEDON;
        m_stateDiagramm[std::make_pair(State::STATE_TOGGLEDON, Transition::TRANSITION_REQUEST)] = State::STATE_READY;
    }
}
