#ifndef ABILITY_H
#define ABILITY_H

#include <memory>
#include <hero_game/abilitystate.h>

namespace hero_game {
    class Ability
    {
    public:
        Ability();
    private:
        std::unique_ptr<AbilityState> m_state;
    };
}


#endif // ABILITY_H
