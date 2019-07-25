#ifndef HERO_H
#define HERO_H

#include <string>
#include <array>
#include <memory>
#include <hero_game/ability.h>

namespace hero_game
{
    class hero
    {
    public:
        hero(const std::string& name, std::array<std::unique_ptr<Ability>, 4> &abilities);

        void requestAbility(unsigned int index);
    private:
        const std::string m_name;
        std::array<std::unique_ptr<Ability>, 4> m_abilities;
    };
}


#endif // HERO_H
