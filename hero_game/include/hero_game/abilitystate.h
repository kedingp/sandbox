#ifndef ABILITYSTATE_H
#define ABILITYSTATE_H

#include <hero_game/ability.h>
#include <memory>

namespace hero_game
    {
    class AbilityState
    {
    public:
        AbilityState();

        virtual ~AbilityState();

        virtual std::unique_ptr<AbilityState> request(Ability& ability) = 0;

        virtual void enter(Ability& ability) = 0;

    protected:
        std::unique_ptr<AbilityState> getNextStateBehaviour(const State state, const Transition transition, const Ability& ability);

        State getNextState(const State state, const Transition transition, const Ability& ability);

        std::unique_ptr<AbilityState> getStateBehaviour(const State state);
    };
}

#endif // ABILITYSTATE_H
