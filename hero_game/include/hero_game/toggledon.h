#ifndef TOGGLEDON_H
#define TOGGLEDON_H

#include <hero_game/abilitystate.h>
#include <hero_game/ability.h>

namespace hero_game
{
    class ToggledOn : public AbilityState
    {
    public:
        ToggledOn();

        ~ToggledOn() override;

        std::unique_ptr<AbilityState> request(Ability& ability) override;

        void enter(Ability &ability) override;
    };
}

#endif // TOGGLEDON_H
