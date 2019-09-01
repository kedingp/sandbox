#ifndef EXECUTABLEABILITY_H
#define EXECUTABLEABILITY_H

#include <hero_game/ability.h>

namespace hero_game
{
    class ExecutableAbility : public Ability
    {
    public:
        ExecutableAbility(const std::string &name, const unsigned int cooldown);
    };
}
#endif // EXECUTABLEABILITY_H
