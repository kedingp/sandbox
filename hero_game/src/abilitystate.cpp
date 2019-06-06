#include <hero_game/abilitystate.h>
#include <hero_game/ready.h>
#include <hero_game/cooldown.h>
#include <hero_game/toggledon.h>
#include <iostream>

namespace hero_game
{
    AbilityState::AbilityState()
    {

    }

    AbilityState::~AbilityState()
    {
    }

    std::unique_ptr<AbilityState> AbilityState::getNextStateBehaviour(const State state, const Transition transition, const Ability &ability)
    {
        State newState = getNextState(state, transition, ability);
        if (newState == state)
        {
            return NULL;
        }
        else
        {
            std::unique_ptr<AbilityState> newStateBehaviour = getStateBehaviour(newState);
            return newStateBehaviour;
        }
    }

    State AbilityState::getNextState(const State state, const Transition transition, const Ability& ability)
    {
        if (ability.m_stateDiagramm.find(std::make_pair(state, transition)) == ability.m_stateDiagramm.end())
        {
                    //
                    //  Invalid state transition
                    //
                    std::cout << "There is no next state. Returning input state" << std::endl;
                    return state;
        }
        else
        {
            State nextState = ability.m_stateDiagramm.at(std::make_pair(state, transition) );
            return nextState;
        }
    }

    std::unique_ptr<AbilityState> AbilityState::getStateBehaviour(const State state)
    {
        std::unique_ptr<AbilityState> stateBehaviour;

        switch (state) {
        case State::STATE_READY:
            stateBehaviour.reset(new Ready());
            break;
        case State::STATE_COOLDOWN:
            stateBehaviour.reset(new Cooldown());
            break;
        case State::STATE_TOGGLEDON:
            stateBehaviour.reset(new ToggledOn());
            break;
        default:
            std::cout << "There is no corresponding state behaviour to this state!\n";
            break;
        }

        return stateBehaviour;
    }
}
