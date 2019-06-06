#ifndef READY_H
#define READY_H
#include <hero_game/abilitystate.h>
#include <hero_game/ability.h>
#include <memory>

namespace hero_game
{
    class Ready : public AbilityState
    {
    public:
        Ready();

        ~Ready() override;

        std::unique_ptr<AbilityState> request(Ability& ability) override;

        void enter(Ability &ability) override;
    };
}

#endif // READY_H
