#ifndef TOGGLEABILITY_H
#define TOGGLEABILITY_H

#include <hero_game/ability.h>
#include <string>

namespace hero_game
{
    class ToggleAbility : public Ability
    {
    public:
        ToggleAbility(const std::string& name);
    };
}
#endif // TOGGLEABILITY_H
