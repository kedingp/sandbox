#ifndef COOLDOWN_H
#define COOLDOWN_H

#include <hero_game/abilitystate.h>
#include <hero_game/ability.h>
#include <hero_game/timercpp.h>


namespace hero_game
{
    class Cooldown : public AbilityState
    {
    public:
        Cooldown();

        ~Cooldown() override;

        std::unique_ptr<AbilityState> request(Ability &ability) override;

        void enter(Ability &ability) override;
    };
}
#endif // COOLDOWN_H
