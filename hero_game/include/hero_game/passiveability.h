#ifndef PASSIVEABILITY_H
#define PASSIVEABILITY_H

#include <hero_game/ability.h>

namespace hero_game
{
    class PassiveAbility : public Ability
    {
    public:
        PassiveAbility(const std::string &name);
    };
}

#endif // PASSIVEABILITY_H
