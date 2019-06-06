#include <hero_game/hero.h>
#include <iostream>

namespace hero_game
{
    hero::hero(const std::string& name, std::array<std::unique_ptr<Ability>, 4>& abilities) :
        m_name(name)
    {
        for(int i = 0; i < 4; i++)
        {
            m_abilities[i] = std::move(abilities[i]);
        }
        std::cout << "Hero " << m_name <<" initialized!" << std::endl;
    }

    void hero::requestAbility(unsigned int index)
    {
        m_abilities[index]->request();
    }

}
